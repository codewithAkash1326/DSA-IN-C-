#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++){
    
        cin>>arr[i];
    }

    int hash[n+1]={0};
    for(int j=0;j<n;j++){
        hash[arr[j]]+=1;
    }

    
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;

    cout<<hash[num];
             
             
return 0;
}