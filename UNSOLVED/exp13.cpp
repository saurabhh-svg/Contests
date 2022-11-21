#include <bits/stdc++.h>
using namespace std;

int main(){
    float seleffort, seldoc, seld, walstoneffort, walstond, selLines, walstonLines, selProductivity, selManning, walstonProductivity, walstonManning;
    cout << "Enter effort in person-year: ";
    cin >> seleffort;
    seleffort *= 12;
    walstoneffort = 8 * 12;
    selLines = pow((seleffort / 1.4), (float)(1 / 0.93));
    seldoc = 30.4 * pow(selLines, 0.90);
    seld = 4.6 * pow(selLines, 0.26);
    selProductivity = float(selLines / seleffort);
    selManning = float(seleffort / seld);

    walstonLines = pow((walstoneffort / 5.2), (float)(1 / 0.91));
    walstond = 4.1 * pow(walstonLines, 0.36);
    walstonProductivity = (float)(walstonLines / walstoneffort);
    walstonManning = (float)(walstoneffort / walstond);

    cout << "SEL Model values are: " << endl;
    cout << "Effort =" << seleffort << " person-months" << endl;
    cout << "KLOC= " << selLines << " KLOC" << endl;
    cout << "DOC= " << seldoc << " pages" << endl;
    cout << "Duration= " << seld << " months" << endl;
    cout << "Productivity= " << selProductivity << " KLOC/person-months" << endl;
    cout << "Average Manning= " << selManning << " persons" << endl;
    cout << "\n Walston-Felix values are: " << endl;
    cout << "Effort= " << walstoneffort << " person-months" << endl;
    cout << "KLOC= " << walstonLines << " KLOC" << endl;
    cout << "Duration= " << walstond << " months" << endl;
    cout << "Productivity= " << walstonProductivity << " KLOC/person-months" << endl;
    cout << "Average Manning= " << walstonManning << " persons" << endl;

    cout << "Comparing values for Walston-Felix and SEL\n"
         << endl;

    if (walstonLines < selLines)
        cout << "Walston-Felix model require less line of code for software development." << endl;
    else
        cout << "SEL model require less line of code for software development." << endl;

    if (walstond < seld)
        cout << "Walston-Felix model require less time for software development." << endl;
    else
        cout << "SEL model require less time for software development." << endl;

    if (walstonProductivity < selProductivity)
        cout << "Walston-Felix model have less productivity then SEL." << endl;
    else
        cout << "SEL model have less productivity then Walston-Felix." << endl;

    if (walstonManning < selManning)
        cout << "Walston-Felix model suffer from less man power turn over." << endl;
    else
        cout << "SEL model suffer from less man power turn over." << endl;
}
