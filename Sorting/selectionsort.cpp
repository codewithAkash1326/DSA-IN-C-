#include<bits/stdc++.h>
#include<vector>
using namespace std;

void selectionsort(int arr[],int n){

for(int i=0;i<n-1;i++){
    int minidx=i;
    for(int j=i+1;j<n;j++){
        if(arr[minidx]>arr[j]){
            minidx=j;
        }
    }
    swap(arr[minidx],arr[i]);
}

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }        
             
return 0;
}