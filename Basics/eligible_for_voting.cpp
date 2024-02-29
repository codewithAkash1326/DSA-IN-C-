#include<iostream>
using namespace std;

bool eligible(int a,int b){
    if(b>=a)
    return true;
    else
    return false;
}
int main(){
    int a;
    cout<<"enter the age limit for voting"<<endl;
    cin>>a;
    int b;
    cout<<"enter your age"<<endl;
    cin>>b;

    if (eligible(a,b)){
        cout<<"yes you are eligible";
     }
    else{
        cout<<"you are not eligible";
    }

    return 0;
}
