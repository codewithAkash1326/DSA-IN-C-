#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int, int >mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
             
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<num <<"is present "<<mapp[num]<<" times"<<endl;
    }
             
return 0;
}