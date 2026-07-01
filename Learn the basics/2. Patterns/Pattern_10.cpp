/*
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*
**
***
****
*****
****
***
**
*

Print the pattern in the function given to you.
*/

// Approach: The pattern has two parts:
// 1. Increasing triangle: print i+1 stars for each row from 0 to n-1.
// 2. Decreasing triangle: print (n-1) rows where stars decrease from n-1 to 1.
// Both parts use nested loops.


#include <bits/stdc++.h>
using namespace std;

void pattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = n; j > i; j--)
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
    pattern10(n);
}

// Time Complexity: O(n²)
// Space Complexity: O(1)