
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial = 1;
    for(int i =n;i>0;i--){
        factorial=factorial*i;
    }
    cout<<factorial;

    return 0;
}

