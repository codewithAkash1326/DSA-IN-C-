#include<bits/stdc++.h>
using namespace std;
void print(vector<int>arr,int n ,int i){
    if(i==n) return ;
    cout<<arr[i]<<" ";

    print(arr,n,i+1);

}

int main(){
 
 vector<int>arr={1,2,3,4,5,3};

 print(arr,6,0);
 
return 0;
}