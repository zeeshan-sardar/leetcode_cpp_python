// Source: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3238/
// Author: Muhammad Zeeshan Sardar 
// Email: m.zeeshan1923@gmail.com


/******************************************************************************
Given a binary array nums, return the maximum number of consecutive 1's in the array.

 

Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
Example 2:

Input: nums = [1,0,1,1,0,1]
Output: 2
 

Constraints:

1 <= nums.length <= 105
nums[i] is either 0 or 1.

********************************************************************************/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int ones_counter = 0;
        int max_counter = 0;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
                ones_counter++;
            if(nums[i] == 0 or i == nums.size()-1)
            {
                
                if(max_counter < ones_counter)
                    max_counter = ones_counter;
                
                ones_counter = 0;
                
            }
        }
        return max_counter;
    }
};