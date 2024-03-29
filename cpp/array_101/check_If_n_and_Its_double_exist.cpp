// Source: https://leetcode.com/explore/featured/card/fun-with-arrays/527/searching-for-items-in-an-array/3250/
// Author: Muhammad Zeeshan Sardar 
// Email: m.zeeshan1923@gmail.com


/******************************************************************************
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
 

Example 1:

Input: arr = [10,2,5,3]
Output: true
Explanation: N = 10 is the double of M = 5,that is, 10 = 2 * 5.
Example 2:

Input: arr = [7,1,14,11]
Output: true
Explanation: N = 14 is the double of M = 7,that is, 14 = 2 * 7.
Example 3:

Input: arr = [3,1,7,11]
Output: false
Explanation: In this case does not exist N and M, such that N = 2 * M.
 

Constraints:

2 <= arr.length <= 500
-10^3 <= arr[i] <= 10^3

********************************************************************************/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
            
//         for(int i=0; i<arr.size(); i++)
//         {
//             for(int j=1; j<arr.size(); j++)
//             {
//                 if(i == j)
//                 continue;
                
//                 if(arr[i] == 2*arr[j] )
//                 {
//                     cout<<"inside double: "<<i<<", "<<j<<" | "<<arr[i]<<", "<<arr[j]<<endl;
//                     return true;
//                 }
                    
//                 else if((arr[j]%2 == 0 && arr[i] == arr[j]/2))
//                 {
//                     cout<<"inside division \n";
//                     return true;
//                 }
//             }
//         }
        
//         return false;
        
//     }
        
        
        
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=i+1; j<arr.size(); j++)
            {
                
                if(arr[i] == 2*arr[j] || 2*arr[i] == arr[j])
                {
                    return true;
                }
            }
        }
        
        return false;
        
    }        
};