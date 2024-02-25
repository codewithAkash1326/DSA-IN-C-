#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    vector<int>arr(1000);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int count =0;
    int key ;
    cout<<"enter the key:  ";
    cin>>key;
    for(int i =0;i<size;i++){
        if(key==arr[i]){
            count=count +1;
        }
    }
    cout<<"the count of the key number is:  "<<count;
          
return 0;
}
 