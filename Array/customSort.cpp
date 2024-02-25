#include<bits/stdc++.h>
using namespace std;

vector<int>order={3,0,2,1,4};
bool compare (int a,int b ){
  return  find(order.begin(),order.end(),a) < find(order.begin(),order.end(),b);
}

int main(){
 
 vector<int>arr={3,4,0,1,2,3,4,0,4,1,1,2};
  

 sort(arr.begin(),arr.end(),compare);

 for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
 }
 
return 0;
}