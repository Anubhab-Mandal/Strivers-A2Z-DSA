/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

Print the pattern in the function given to you.
*/


// Approach: The pattern is divided into two parts:
// 1. Upper half (pyramid): print increasing stars with decreasing spaces.
// 2. Lower half (inverted pyramid): print decreasing stars with increasing spaces.
// Both parts use nested loops to control spaces and stars per row.

#include <bits/stdc++.h>
using namespace std;

void pattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern9(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)