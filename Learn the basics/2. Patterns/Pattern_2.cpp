/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop prints each row, while the inner loop prints '*' exactly (i + 1) times in the ith row, creating a right-angled triangle.

#include <bits/stdc++.h>
using namespace std;

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
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
    pattern2(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)