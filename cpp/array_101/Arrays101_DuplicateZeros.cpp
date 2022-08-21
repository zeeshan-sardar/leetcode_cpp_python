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