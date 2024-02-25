
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

    int count =0;
    int number;
    cout<<"enter the number ";
    cin>>number;
    for(int i=1;i<size;i++){
        if(arr[i]>number){
            count = count +1;
        }
    }
    cout<<"there are  "<<count<< " numbers which are greater than the key";

             
return 0;
}