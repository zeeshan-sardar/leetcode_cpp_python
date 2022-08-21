#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int read_ptr = 0;
        int zero_count = 0;
        int shift_ptr = 1;
        int zero_ptr = nums.size();
        
        while(read_ptr < nums.size())
        {
            if(nums[read_ptr] == 0)
            {
                zero_count++;
                
            }
            if(zero_count > 0 && nums[read_ptr] != 0)
            {
                for(int i = read_ptr-zero_count; i < zero_ptr; i++)
                {
                    
                    nums[i] = nums[i+zero_count];
                    
                }
                for(int i = zero_ptr - zero_count; i < zero_ptr; i++){
                    nums[i] = 0;
                    }
                    zero_ptr = zero_ptr-zero_count;;
            }
            read_ptr++;
        }
    }
};

int main()
{
    Solution sol_obj;
    vector<int> arr = {0,1};
    sol_obj.moveZeroes(arr);


}