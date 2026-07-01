/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops for each row. First, print (n - i - 1) spaces to center the pyramid, then print (2 * i + 1) '*' characters to form each level of the pyramid.

#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < 2 * i + 1; j++)
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
    pattern7(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)