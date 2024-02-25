#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    
    for(int idx =1;idx<=size;idx++){
        cin>>arr[idx];
    }
    int sum =0;
    for(int i =1;i<=size;i++){
        sum = sum +arr[i];
    }
    cout<<sum;


    return 0;
}