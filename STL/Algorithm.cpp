#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){

    vector<int>v;

    v.push_back(2);
    v.push_back(5);
    v.push_back(6);            
    v.push_back(8);
    v.push_back(9);  


    // it will use the binary search algorithm from starting to end

     cout<<binary_search(v.begin(),v.end(),3)<<endl; 

     //it will rotate the array 
     rotate(v.begin(),v.begin()+1,v.end());

     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
 
     
 
return 0;
}