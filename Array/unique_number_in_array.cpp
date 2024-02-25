// optimize solution

#include<iostream>
#include<vector>
using namespace std;
int findunique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans =ans^arr[i];

    } 
    return ans;
}           
int main(){
    int size;
    cin>>size;
    int arr[size]={};
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<findunique(arr,size);
           
return 0;
}


// another solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(100);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
           if(arr[i]==arr[j]){
            arr[i]=arr[j]=-1;
              
               
            }     
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]>0){
            cout<<arr[i];
        }
    }
 
        
             
return 0;
}