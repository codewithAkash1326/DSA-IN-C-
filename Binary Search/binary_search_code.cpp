#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        

        else if(arr[mid]<key){
            start=mid+1;
        }

        else{
            end = mid-1;
        }

        mid = (start+end)/2;
    
    }
    return -1; 


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

    cout<<binarysearch(arr,size,key);
     
 
 return 0;
}