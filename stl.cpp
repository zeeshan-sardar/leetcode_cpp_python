#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;

    cout<<"vector size before insertion: "<<vec.size()<<endl;

    for(int i=0; i<5; i++)
    {
        vec.push_back(i);
    }
    
    cout<<"vector size AFTER insertion: "<<vec.size()<<endl;

    for(int i=0; i<vec.size(); i++)
    {
        
        cout<<"vector values using size: "<<vec[i]<<endl;
    }

    vector<int>::iterator it;
    it = vec.begin();
    while(it != vec.end())
    {
        cout<<"vector values using Iterator: "<<*it<<endl;
        it++;
    }

}