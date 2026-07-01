/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

12345
1234
123
12
1

Print the pattern in the function given to you.
*/

// Approach: Use two nested loops. The outer loop starts from n and decreases to 1, while the inner loop prints numbers from 1 to the current row length, forming an inverted number triangle.


#include <bits/stdc++.h>
using namespace std;

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
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
    pattern6(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)