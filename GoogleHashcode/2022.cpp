package main

    import(
        "bufio"
        "fmt"
        "io/ioutil"
        "log"
        "os"
        "sort"
        "strconv"
        "strings")

    // const exampleFile = "a_an_example"

    type Skill struct
{
    Name string
        Level int
}

type Project struct
{
    Name string
        Duration int
            BestBefore int
                CompletionPoints int
                    SkillsRequired[] Skill
}

type Contributor struct
{
    Name string
        Skills map[string] Skill
            WorkingDays int
}

func(c *Contributor) LevelIn(skillName string) int
{
    skill, ok : = c.Skills[skillName] if ok
    {
        return skill.Level
    }
    return 0
}

func(c *Contributor) AvailableFor(project Project) bool{
    return c.WorkingDays + project.Duration <= project.BestBefore}

func(c *Contributor) IsPartOf(contributors[] string) bool
{
    for
        _, projectContributor : = range contributors
        {
            if c
                .Name == projectContributor
                {
                    return true
                }
        }
    return false
}

type ProjectWithContributors struct
{
    ProjectName string
        Contributors[] string
}

func
main()
{
    files, err : = ioutil.ReadDir("inputs") if err != nil
    {
        log.Fatal(err)
    }

    for
        _, file : = range files
        {
            if strings
                .HasSuffix(file.Name(), ".txt")
                {
                example:
                    = strings.Split(file.Name(), ".")[0] parseFile(example)
                }
        }
}

func parseFile(exampleFile string)
{
    content, err := ioutil.ReadFile(fmt.Sprintf("inputs/%s.in.txt", exampleFile))
	if err != nil {
		log.Fatal(err)
	}

	contributors := make(map[string]Contributor)
	//contributorsBySkill := make(map[string]Project)

	scanner := bufio.NewScanner(strings.NewReader(string(content)))

	// Parse first line
	scanner.Scan()
	firstLine := scanner.Text()
	contributorsCount, projectsCount := parseLineWith2int(firstLine)

	projectsWithContributors := []ProjectWithContributors{}

	for i := 0;
    i < contributorsCount;
    i++
    {
        scanner.Scan()
		contributorName, skillsCount := parseLineWith1String1Int(scanner.Text())

		skills := make(map[string]Skill)
		for j := 0;
        j < skillsCount;
        j++ {
            scanner.Scan()
                skillName,
            skillLevel : = parseLineWith1String1Int(scanner.Text())

            skill :
                = Skill{
                      Name : skillName,
                      Level : skillLevel,
                  } skills[skillName] = skill
        }

        contributors[contributorName] = Contributor
        {
        Name:
            contributorName,
                Skills : skills,
                         WorkingDays : 0,
        }
    }

projects:= scanProjects(projectsCount, scanner)

	sort.Slice(projects, func(i, j int) bool {
		return projects[i].CompletionPoints > projects[j].CompletionPoints
	})

	for _, project := range projects
    {
    contributorNames:
        = getContributorsForProject(project, contributors) if contributorNames == nil{
                                                                                      continue}

          projectWithContributors : = ProjectWithContributors{
            ProjectName : project.Name,
            Contributors : contributorNames,
        } projectsWithContributors = append(projectsWithContributors, projectWithContributors)
    }

// Write to result file
result:= fmt.Sprintf("%d", len(projectsWithContributors))
	for _, project := range projectsWithContributors {
		result += fmt.Sprintf("\n%s\n%s", project.ProjectName, strings.Join(project.Contributors, " "))
	}
	err = os.WriteFile(fmt.Sprintf("outputs/%s.out.txt", exampleFile), []byte(result), 0644)
	if err != nil {
		log.Fatal(err)
	}

	// Write to log file
	err = os.WriteFile(fmt.Sprintf("logs/%s.out.txt", exampleFile), []byte(fmt.Sprintf("%v\n%v", contributors, projects)), 0644)
	if err != nil
    {
        log.Fatal(err)
    }
}

func getContributorsForProject(project Project, contributors map[string] Contributor)[] string
{
projectContributors:= []string{}
	for _, requiredSkill := range project.SkillsRequired
    {
    contributorName:
        = getContributorForSkill(project, contributors, projectContributors, requiredSkill) if contributorName == "" {
                                                                                                                      return nil} projectContributors = append(projectContributors, contributorName)
    }

    for
        _, projectContributor : = range projectContributors
        {
        contributor:
            = contributors[projectContributor] contributor.WorkingDays = contributor.WorkingDays + project.Duration
                                                                                                       contributors[projectContributor] = contributor
        }
    return projectContributors
}

func getContributorForSkill(project Project, contributors map[string] Contributor, projectContributors[] string, requiredSkill Skill) string
{
    for
        _, contributor : = range contributors
        {
            contributorSkill, contributorHasSkill : = contributor.Skills[requiredSkill.Name] if !contributorHasSkill
            {
                continue
            }

            if contributor
                .IsPartOf(projectContributors)
                {
                    continue
                }

            if contributor
                .AvailableFor(project) && (requiredSkill.Level <= contributorSkill.Level)
                {
                    projectContributors = append(projectContributors, contributor.Name) return contributor.Name
                }
        }
    // We didn't find someone for this skill, let's test next project
    return ""
}

func getContributorsWithExactlevel(projectSkill Skill, contributors map[string] Contributor)[] Contributor
{
potentialMentors:= []Contributor{}
	for _, contributor := range contributors
    {
        if contributor
            .LevelIn(projectSkill.Name) == projectSkill.Level
            {
                potentialMentors = append(potentialMentors, contributor)
            }
    }
    return potentialMentors
}

func getPotentialMentors(projectSkill Skill, contributors map[string] Contributor)[] Contributor
{
potentialMentors:= []Contributor{}
	for _, contributor := range contributors
    {
        if contributor
            .LevelIn(projectSkill.Name) >= projectSkill.Level
            {
                potentialMentors = append(potentialMentors, contributor)
            }
    }
    return potentialMentors
}

func getPotentialMentees(projectSkill Skill, contributors map[string] Contributor)[] Contributor
{
potentialMentees:= []Contributor{}
	for _, contributor := range contributors
    {
        if contributor
            .LevelIn(projectSkill.Name) == projectSkill.Level - 1
            {
                potentialMentees = append(potentialMentees, contributor)
            }
    }
    return potentialMentees
}

func scanProjects(projectsCount int, scanner *bufio.Scanner)[] Project
{
projects:= []Project{}
	for i := 0;
    i < projectsCount;
    i++
    {
        scanner.Scan()
		line := scanner.Text()
		lineSplitted := strings.Split(line, " ")

		projects = append(projects)

		skillsCount := Atoi(lineSplitted[4])
		var skills []Skill
		for j := 0;
        j < skillsCount;
        j++ {
            scanner.Scan()
                skillName,
            skillLevel : = parseLineWith1String1Int(scanner.Text())

            skill :
                = Skill{
                      Name : skillName,
                      Level : skillLevel,
                  } skills = append(skills, skill)
        }

        // Add new project to the list of projects
        projects = append(projects, Project{
            Name : lineSplitted[0],
            Duration : Atoi(lineSplitted[1]),
            BestBefore : Atoi(lineSplitted[2]),
            CompletionPoints : Atoi(lineSplitted[3]),
            SkillsRequired : skills,
        })
    }
    return projects
}

func checkErr(err error)
{
    if err
        != nil
        {
            log.Fatal(err)
        }
}

func Atoi(s string) int{
    i,
    err : = strconv.Atoi(s)
                checkErr(err) return i
}

func parseLineWith1String1Int(line string)(string, int){
    lineSplitted : = strings.Split(line, " ") return lineSplitted[0],
    Atoi(lineSplitted[1])
}

func parseLineWith2int(line string)(int, int){
    lineSplitted : = strings.Split(line, " ") return Atoi(lineSplitted[0]),
    Atoi(lineSplitted[1])
}

func parseLine(line string)[] string{
    return RemoveIndex(strings.Fields(line), 0)}

func RemoveIndex(s[] string, index int)[] string
{
    return append(s[:index], s [index + 1:]...)
}