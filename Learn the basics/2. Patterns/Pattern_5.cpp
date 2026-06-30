/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
****
***
**
*

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop starts from n and decreases to 1, while the inner loop prints '*' exactly i times in each row, creating an inverted right-angled triangle.

#include <bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
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
    pattern5(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)