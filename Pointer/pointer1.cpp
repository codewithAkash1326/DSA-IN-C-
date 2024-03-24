#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    cout<<"addres of a "<<&a<<endl;
    cout<<"addrres of a store in pointer "<<p<<endl;
    cout<<"value at adrress "<<*p<<endl;
     cout<<"before "<<a<<endl;
    (*p)++;
    cout<<"after "<<a<<endl;

    

             
             
return 0;
}