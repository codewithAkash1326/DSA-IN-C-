// input using for each loop

#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[size];
    for(int &ele:arr){
        cin>>ele;}

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
  


    return 0;
}