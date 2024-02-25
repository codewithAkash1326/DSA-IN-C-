#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int max =arr[0];
    for(int idx=1;idx<size;idx++){
        if(arr[idx]>max){
            max = arr[idx];
        }

    }cout<<max<<"  is the maximum";


    return 0;
}