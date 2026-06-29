/*
Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised.

Example 1
Input: day = 3
Output: Wednesday

Example 2
Input: day = 8
Output: Invalid
*/

// Approach: Use a switch statement to map the input day (1–7) to the corresponding day of the week. Print "Invalid" for any value outside this range.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid";
    }
    return 0;
};

// Time Complexity: O(1)
// Space Complexity: O(1)