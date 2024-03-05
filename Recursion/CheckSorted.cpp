#include<bits/stdc++.h>
using namespace std;
bool CheckSorted(vector<int>arr,int size,int idx){
    if(idx==size) return true;

    if(arr[idx]<arr[idx-1]){
        return false;
    }

   return CheckSorted(arr,size,idx+1);
}
int main(){
 
 vector<int>arr={2,3,4,7,8,9};
 int size=6;
  
 if(CheckSorted(arr,size,1)){
    cout<<"sorted";
 }
 else{
    cout<<"not sorted";
 }
 
return 0;
}