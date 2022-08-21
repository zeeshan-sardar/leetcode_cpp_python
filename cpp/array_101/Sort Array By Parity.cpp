// Source: 
// Author: Muhammad Zeeshan Sardar 
// Email: m.zeeshan1923@gmail.com


/******************************************************************************
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 5000
0 <= nums[i] <= 5000

********************************************************************************/



#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int read_ptr = 0;
        int write_ptr = 0;
        int temp_swap;
        
        for(int i=0; i<nums.size();i++)
        {
//             if(nums[i]%2 == 0 && i > write_ptr)
//             {
//                 temp_swap = nums[write_ptr];
//                 nums[write_ptr] = nums[i];
//                 nums[i] = temp_swap;
                
//                 write_ptr++;
                    
//             }
//             else if(nums[i]%2 == 0)
//             {
//                 write_ptr++;
//             }
            if(nums[i]%2 == 0)
            {
                temp_swap = nums[write_ptr];
                nums[write_ptr] = nums[i];
                nums[i] = temp_swap;
                
                write_ptr++;
                    
            }
            
        }
        return nums;
        
    }
};

int main()
{
    Solution sol_obj;
    vector<int> arr = {3,1,2,4};
    sol_obj.sortArrayByParity(arr);


}