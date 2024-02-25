#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<" ";
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }


    int occurence;
    int key;
    cout<<"enter the key:"<<" ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(key==arr[i]){
            occurence=i;
        }
    }
     cout<<"the last position of the key is" <<"  "<< occurence;
     cout<<endl;

    for(int i=size;i>0;i--){
        if(key==arr[i]){
            occurence=i;
            break;
        }
    }
    cout<<"the last position of the key is" <<"  "<< occurence;
             
             
return 0;
} 