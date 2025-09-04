/**
 * @file Lab3_3
 *
 * This program is to read in seconds from user and convert to days, hours, mins, seconds
 *
 * @author Braxton Prendergast
 * @date   9/4/2025
 */

#include <iostream>
using namespace std;


int main()
{
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
    int originalSeconds = 0;

    cout << "Enter number of seconds: " << endl;
    cin >> originalSeconds;

    // Calculate seconds
    seconds = originalSeconds % 60;

    // Calculate Minutes
    minutes = (originalSeconds / 60) % 60;

    // Calculate Hours
    hours = originalSeconds / 60 / 60 % 24;

    // Calculate Days
    days = originalSeconds / 60 / 60 / 24;


    cout << originalSeconds << " seconds is equivalent to " << days << " days, " << hours <<" hours, " << minutes << " minutes, " << 
    "and " << seconds << " seconds!" << endl;



    return 0;
}