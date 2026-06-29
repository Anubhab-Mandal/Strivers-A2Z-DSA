/*
Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.
A number ends with digit d if its last digit is d.

Example 1
Input: d = 1
Output: 12300
Explanation:
The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
Their sum is 12300.
*/

 // Approach: Start from the given digit d. Every next number ending with d can be formed by adding 10 (d, d+10, d+20, ...). We iterate 50 times and keep adding these numbers to sum.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d;
    cin >> d;
    int j = 1;
    int sum = 0;
    while (j <= 50)
    {
        sum += d;
        d += 10;
        j++;
    }
    cout << sum;
};

// Time Complexity: O(1)
//Space Complexity: O(1)