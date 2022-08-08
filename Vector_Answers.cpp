//Largest Number
/*
Given an array A[] of size n. The task is to find the largest element in it.
 

Example 1:

Input:
n = 5
A[] = {1, 8, 7, 56, 90}
Output:
90
Explanation:
The largest element of given array is 90.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

 https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1?difficulty%5B%5D=-1&page=1&query=difficulty%5B%5D-1page1
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int largestNum = arr[0];
        
        for(int i = 1; i<n; i++)
        {
            largestNum = max(largestNum,arr[i]);
        }
        
        return largestNum;
    }
};



