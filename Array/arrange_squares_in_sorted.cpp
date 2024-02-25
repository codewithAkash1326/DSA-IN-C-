#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans[size];
    int i=0;
    int j =size-1;
    int k = size-1;
    while(i<=j){
        if(abs(arr[i])>abs(arr[j])){
            ans[k]=arr[i]*arr[i];
            k--;
            i++;

        }
        else{
            ans[k]=arr[j]*arr[j];
            k--;
            j--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }         
             
return 0;
}