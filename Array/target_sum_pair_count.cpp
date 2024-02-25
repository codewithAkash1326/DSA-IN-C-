#include<iostream>
#include<vector>
using namespace std;
int count(int arr[],int size,int number){
    int count=0;
    int i=0;
    int j=size-1;

    while(i<j){
        if(abs(arr[i])+abs(arr[j])==number){
            count = count + 1;
            i++;
            j--;
        }
        else if(abs(arr[i])+abs(arr[j])<number){
            i++;
        }
        else{
            j--;
        }
    }
    return count;

}

int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array input"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;

    cout<<count(arr,size,number);
             
             
return 0;
}