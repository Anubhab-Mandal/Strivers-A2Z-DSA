/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1
12
123
1234
12345

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop iterates through each row, and the inner loop prints numbers from 1 to the current row number, forming a right-angled number triangle.

#include <bits/stdc++.h>
using namespace std;

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern3(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)