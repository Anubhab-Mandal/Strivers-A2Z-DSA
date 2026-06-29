/*
Given marks of a student, print on the screen:

Grade A if marks >= 90
Grade B if marks >= 70
Grade C if marks >= 50
Grade D if marks >= 35
Fail, otherwise.

Example 1
Input: marks = 95
Output: Grade A
Explanation: marks are greater than or equal to 90.

Example 2
Input: marks = 14
Output: Fail
Explanation: marks are less than 35.
*/

// Approach: Check the marks against the grade boundaries using an if-else if ladder.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grade A";
    }
    else if (marks >= 70)
    {
        cout << "Grade B";
    }
    else if (marks >= 50)
    {
        cout << "Grade C";
    }
    else if (marks >= 35)
    {
        cout << "Grade D";
    }
    else
    {
        cout << "Fail";
    }
    return 0;
};

// Time Complexity: O(1)
// Space Complexity: O(1)