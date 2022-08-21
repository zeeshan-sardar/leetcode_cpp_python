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
            if(nums[i]%2 == 0)
            {
                write_ptr++;
            }
            else if(nums[i]%2 == 0 && i > write_ptr)
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