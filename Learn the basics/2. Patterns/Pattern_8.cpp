/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *


Print the pattern in the function given to you.
*/

// Approach: Use two nested loops for each row. First, print i leading spaces, then print (2 * n - (2 * i + 1)) '*' characters. The spaces increase while the number of stars decreases, forming an inverted pyramid.

#include <bits/stdc++.h>
using namespace std;

void pattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        // for (int j = 0; j < 2*i-1; j++)
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
    pattern8(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)