#include<bits/stdc++.h>
using namespace std;
void doubleEle(vector<int>&arr,int size,int idx){
    //base case
    if(idx==size) return;

    //processing
    arr[idx]=2*arr[idx];

    //recursive call
    doubleEle(arr,size,idx+1);


}
int main(){
 
 vector<int>arr={10,20,30,40,50};

 //calling the function
 doubleEle(arr,5,0);
 
 //printing the array after doubling
 for(int num:arr){
    cout<<num<<" ";
 }

 
return 0;
}