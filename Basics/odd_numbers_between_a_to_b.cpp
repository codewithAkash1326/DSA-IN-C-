#include<iostream>
using namespace std;

bool isodd(int a,int b){
    if(a%2!=0){
    return true;
    }
    
    }
     

int main(){
    int a,b;
    cin>>a>>b;
    for(int i =a;a<=b;i++){
        if (isodd(i,b)){
            if(i>b){
                break;
            }
        cout<<i<<endl;}
    }

    return 0;
}
    