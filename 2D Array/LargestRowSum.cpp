#include<bits/stdc++.h>
using namespace std;

int LargestRowSum(int arr[][3],int n,int m){
    int ans=-1;
for(int i=0;i<n;i++){
    
    int max=-3727;
    int sum=0;
    for(int j=0;j<m;j++){

      
        sum=sum+arr[i][j];
    }
    if(sum>max){
        max=sum;
        ans=i;
    }
    
  }
  return ans;

}
int main(){
  
  int arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }

 cout<<LargestRowSum(arr,3,3);
return 0;
}