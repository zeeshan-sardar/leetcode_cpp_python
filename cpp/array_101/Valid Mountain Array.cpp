// Source: https://leetcode.com/explore/featured/card/fun-with-arrays/527/searching-for-items-in-an-array/3251/
// Author: Muhammad Zeeshan Sardar 
// Email: m.zeeshan1923@gmail.com


/******************************************************************************

Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

 

Example 1:

Input: arr = [2,1]
Output: false
Example 2:

Input: arr = [3,5,5]
Output: false
Example 3:

Input: arr = [0,3,2,1]
Output: true
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 104
********************************************************************************/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        
        int j;
        bool mountain_flag = false;
        bool increase_flag = false, decrease_flag = false;
        
        if(arr.size() < 3)
            return false;
        
        for(int i=0; i<arr.size()-1; i++)
        {
            if(arr[i+1] == arr[i])
                return false;
            
            if(arr[i+1] > arr[i])
            {
                if(decrease_flag)
                    return false;
                increase_flag = true;
            }
                
            else if(arr[i+1] < arr[i])
            {
                // if(increase_flag)
                //     return false;
                decrease_flag = true;
                
            }
        }
        
        if(increase_flag && decrease_flag)
            return true;
        else
            return false;
    }
};