#include<iostream>
#include<vector>
using namespace std;
int main()
{   int size ;
    cin>>size;
    vector<int>arr;
    for(int i =0;i<size;i++){
        int element;
        cin>>element;
        
         arr.push_back(element);
    }

    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}