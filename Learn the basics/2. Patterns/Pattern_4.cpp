/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1
22
333
4444
55555

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop iterates through each row from 1 to n, and the inner loop prints the current row number exactly i times.

#include <bits/stdc++.h>
using namespace std;

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern4(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)