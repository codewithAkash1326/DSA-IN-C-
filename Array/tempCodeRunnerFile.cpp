#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cout<<"enter the number of rows"<<endl;
  cin>>n;
  int m;
  cout<<"enter the number of columns"<<endl;
  cin>>m;
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }


for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
  }cout<<endl;
}
     
             
return 0;
}