#include<iostream>
#include<vector>

using namespace std;



class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // vector<int> 
            
        for(int i=0; i<arr.size(); i++)
        {
            for(int j=1; j<arr.size(); j++)
            {
                if(i == j)
                continue;
                
                if(arr[i] == 2*arr[j] )
                {
                    cout<<"inside double: "<<i<<", "<<j<<" | "<<arr[i]<<", "<<arr[j]<<endl;
                    return true;
                }
                    
                else if((arr[j]%2 == 0 && arr[i] == arr[j]/2))
                {
                    cout<<"inside division \n";
                    return true;
                }
            }
        }
        
        return false;
        
    }
};

int main()
{
    Solution sol_obj;
    vector<int> arr = {-2,0,10,-19,4,6,-8};
    sol_obj.checkIfExist(arr);


}