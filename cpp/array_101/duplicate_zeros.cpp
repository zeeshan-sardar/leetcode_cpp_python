// Source: https://leetcode.com/explore/featured/card/fun-with-arrays/525/inserting-items-into-an-array/3245/
// Author: Muhammad Zeeshan Sardar 
// Email: m.zeeshan1923@gmail.com


/******************************************************************************
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

 

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 9

********************************************************************************/



class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int arr_len = arr.size();
        
        int i = 0;
        while(i<arr_len)
        {
            if(arr[i] == 0)
            {
                arr.insert(arr.begin()+i,0);
                i++;
            }
            i++;
                
        }
        
        arr.resize(arr_len);
        
        
        // for(int i=0;i<arr.size();i++)
        // {
        //     if(arr[i]==0)
        //     {
        //         for(int j=arr.size()-2;j>=i;j--)
        //         {
        //             arr[j+1]=arr[j];
        //         }
        //         i++;
        //     }
    }
    

};