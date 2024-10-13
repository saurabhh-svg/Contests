def max_sum_of_two_subgrids(grid,N):
    N = len(grid)
    max_sum = 0
    
    for size1 in range(1, N + 1):
        for r1 in range(N - size1 + 1):
            for c1 in range(N - size1 + 1):
                subgrid1_sum = sum(grid[i][j] for i in range(r1, r1 + size1) for j in range(c1, c1 + size1))
                
                for size2 in range(1, N + 1):
                    for r2 in range(N - size2 + 1):
                        for c2 in range(N - size2 + 1):
                            if (r2 >= r1 + size1 or r2 + size2 <= r1) and (c2 >= c1 + size1 or c2 + size2 <= c1):
                                subgrid2_sum = sum(grid[i][j] for i in range(r2, r2 + size2) for j in range(c2, c2 + size2))
                                
                                max_sum = max(max_sum, subgrid1_sum + subgrid2_sum)
    
    return max_sum

# Input reading and function call
N = int(input().strip())
grid = [list(map(int, input().strip().split())) for _ in range(N)]
print(max_sum_of_two_subgrids(grid, N))
