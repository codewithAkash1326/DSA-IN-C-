#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int targetsum;
    cout<<"enter the target sum"<<endl;
    cin>>targetsum;

    int start=0;
    int end=size-1;
    bool found = false;
    while(start<end){
      
      if(arr[start]+arr[end]==targetsum){
        found=true;
        break;
      }

      else if(arr[start]+arr[end]<targetsum){
        start++;
      }

      else{
        end--;
      }


    }
    if(found==true){
        cout<<"yes";
    }else
    cout<<"no";
             
             
return 0;
}