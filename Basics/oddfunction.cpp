#include<iostream>
using namespace std;
bool odd(int a){

    if(a%2!=0){
        return true;
    }
}
int main(){

int a;
 cin>>a;
 if(odd(a)){
  cout <<"this is odd";
 }else{
    cout<<"this is even";
 }

    return 0;
}