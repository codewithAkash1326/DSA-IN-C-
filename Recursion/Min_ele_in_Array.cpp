#include<bits/stdc++.h>
using namespace std;
int minimum(vector<int>arr,int size,int idx,int &mi){
    // base case
    if(idx==size) return -1;
      
      // storing minimum element into mi
      mi = min(arr[idx],mi);

     // finding minimum ele after 0 index
      minimum(arr,size,idx+1,mi);
}
int main(){
 
 vector<int>arr={5,6,4,4,9,8};
 int mi =INT_MAX;
 minimum(arr,6,0,mi);
 cout<<mi;
return 0;
}