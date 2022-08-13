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





/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Constraints:
1 <= prices.length <= 105
0 <= prices[i] <= 104
*/

class Solution 
{
public:
    int maxProfit(vector<int>& prices) 
    {
       int maxProf = 0, minNum = INT_MAX;
        for(int i = 0 ; i < prices.size() ; i++) {
            if(prices[i] < minNum)
                minNum = prices[i];
            if(prices[i] - minNum > maxProf)
                maxProf = prices[i] - minNum;
        }
        return maxProf;
    }
};



//OR

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        vector<int> maxAyRight(n,0);
        int curMax = prices[n-1];
        
        for(int i=n-2; i>=0; i--)
        {
            maxAtRight[i]=curMax;
            curMax = max(curMax, prices[i]);
        }
        int profit = 0;
        
        for(int i=0; i<n-1; i++)
        {
            int curProfit = maxAtRight[i] - prices[i];
            if(curProfit>profit)
            {profit = curProfit;}
        }
        
        return profit;
        
    }
};



