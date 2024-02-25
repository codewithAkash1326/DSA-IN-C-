#include<iostream>
using namespace std;
int main()
{  int size;
   cin>>size;
    int arr[size];
    for(int &ele:arr){
        cin>>ele;
    }

    // int size;
    // cin>>size;
    // int arr[1000];
    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    // }

    

    int key;
    cout<<"enter the key";
    cin>>key;
    for(int idx=0;idx<size;idx++){
        if(key==arr[idx]){
            cout<<"this is present"<<endl;
            break;
        }
    }
     
    
 return 0;
}