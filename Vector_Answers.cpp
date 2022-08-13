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




//MAX PROFIT
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




//MAX CONSECUTIVE ONE
/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.

Example 1:
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         
        vector<int> vec;
        int i=0;
        while(i<nums.size())
        {
            int j=0;
            while(i<nums.size() && nums[i]==1)
            {
                j++;
                i++;
            }
            vec.push_back(j);
            i++;
        }
        return *max_element(vec.begin(), vec.end());
    }
};





//FIND THE DUPLICATE NUMBER
/*
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
There is only one repeated number in nums, return this repeated number.
You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int k=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] = nums[i+1])
                k= nums[i];
        }
        return k;
    }
};
// O(n^2) is worser than O(n log(n))






//PLUS ONE
/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.

Example 1:
Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n = digits.size();
        int carry = 0;
        
        digits[n-1] = digits[n-1] + 1;
        
        if(digits[n-1] == 10)
        {
            carry = 1;
            digits[n-1] = 0;
        }
        
        for(int i = n-2; i>=0; i--)
        {
            digits[i] = digits[i] + carry;
            if(digits[i] == 10)
            {
                digits[i] = 0;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
        }
        
        if(carry == 1)
        {
            digits.insert(digits.begin(),1);
        }
        
        return digits;        
    }
};





//PRODUCT OF ARRAY EXCEPT SELF
/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Constraints:
2 <= nums.length <= 105
-30 <= nums[i] <= 30
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> rightProd(n,1);
        vector<int> leftProd(n, 1 );
        
        for(int i = n-2; i>=0; i--)
        {rightProd[i] = rightProd[i+1]*nums[i+1];}
        for(int i = 1; i<n; i++)
        {leftProd[i] = leftProd[i-1]*nums[i-1];}
        for(int i =0; i<n; i++)
        {nums[i]=rightProd[i]*leftProd[i];}
        
        return nums;
    }
};




//











