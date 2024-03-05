#include<bits/stdc++.h>
using namespace std;
int BS(vector<int>arr,int size,int target,int start,int end){
    int mid = (start + end)/2;

    // base case
    if(start>end) return -1;

    if(arr[mid]==target){
        return mid;
    }

    else if(arr[mid]<target){
        return BS(arr,size,target,mid+1,end);
    }

    else{
        return BS(arr,size,target,start,mid-1);
    }
}
int main(){
 
 vector<int>arr={2,4,6,8,9,11};
 int target = 3;
 int size=6;
 int s=0;
 int e=size -1;
 cout<<"element found at: "<<BS(arr,size,target,s,e);
 
 
return 0;
}