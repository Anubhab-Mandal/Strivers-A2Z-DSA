/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*****
*****
*****
*****

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop runs n times to print n rows, and the inner loop runs n times to print '*' in each row. After printing one row, move to the next line.

#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
    pattern1(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)