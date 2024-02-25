#include<iostream>
#include<vector>
using namespace std;
void swapalternate(int arr[],int size){
 
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
          swap(arr[i],arr[i+1]);
        }
    }
      
}
void printarray(int arr[],int size) {
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";  
    }
}
    
int main(){
    int size;
    cin>>size;
    int ar[size]={};
      for(int i=0;i<size;i++){
          cin>>ar[i];   
    }

swapalternate(ar,size);
printarray(ar,size);          
return 0;
}