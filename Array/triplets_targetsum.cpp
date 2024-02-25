#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    vector<int>arr(100);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int targetsum;
    cout<<"enter the number:  ";
    cin>>targetsum;
    int count =0;
    for(int idx1=0;idx1<size;idx1++){
        for(int idx2=idx1+1;idx2<size;idx2++){
           for(int idx3=idx2+1;idx3<size;idx3++){
              if(targetsum==arr[idx1]+arr[idx2]+arr[idx3]){
                count = count + 1 ;
             }
          }
       }  
    }
    cout<<count;           
return 0;
}