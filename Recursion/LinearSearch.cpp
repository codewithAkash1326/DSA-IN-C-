#include<bits/stdc++.h>
using namespace std;
bool search(int *arr,int size, int idx, int target){
    // base case (return false after traversing the array)
    if(idx==size) return false;

    // if target found at 0 idx return true
    if(arr[idx]==target) return true;

    // check from 1 index if found store the ans
    search(arr,size,idx+1,target);

   // return ans;

}
int main(){
 
 int arr[]={10,20,30,40,50};
 int target=20;
 int idx=0;

 if(search(arr,5,idx,target)==true){
    cout<<"found";
 }
 else{
    cout<<"Not found";
 }
 
return 0;
}