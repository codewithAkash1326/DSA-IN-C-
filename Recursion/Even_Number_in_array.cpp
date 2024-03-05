#include<bits/stdc++.h>
using namespace std;
void findEven(vector<int>arr,int size,int idx,vector<int>&ans){
    // base case
    if(idx==size) return ;

    // if element is even store into ans 
    if(arr[idx]%2==0){
        ans.push_back(arr[idx]);
         
    }
    //check after 0 index
   findEven(arr,size,idx+1,ans);
}
int main(){
 
 vector<int>arr={10,12,13,14,15,16};
 vector<int>ans;

 findEven(arr,6,0,ans);

  for(auto n:ans){
    cout<<n<<" ";
  }

 
return 0;
}