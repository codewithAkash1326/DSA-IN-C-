#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
  vector<int>arr;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    arr.push_back(ele);
  }
  
  sort(arr.begin(),arr.end());
  cout<<"min element is "<<arr[0]<<endl;
  cout<<"max element is "<<arr[n-1]<<endl;
 
return 0;
}

