#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = start +(end - start)/2;
    int ans =-1;
    while(start<=end){
        if(arr[mid]==key){
           ans = mid;
            end = mid-1;
            
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end = mid-1;
        }

        mid = start +(end - start)/2;


    }
    return ans; 


}

int lastocc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid =  start +(end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }

        else if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end = mid-1;
        }

        mid =  start +(end - start)/2;


    }
    return ans; 


}



int main() 
{
    int size;
    cout<<"enter the size"<<endl;
    cin>> size;
    int arr[size];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the number"<<endl;
    cin>>key;

    cout<<firstocc(arr,size,key)<<endl;
    cout<<lastocc(arr,size,key)<<endl;

     
 
}