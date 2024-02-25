#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size:  ";
    cin>>size;
    vector<int>arr(1000);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int min=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]<min){
            min =arr[i];
        }
    }
    cout<<"the minimum number is  " <<min;
     
return 0;   
}
