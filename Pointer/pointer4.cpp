#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";
     
     //it will print address of array first element
    cout<<arr<<endl;

    //but in char array cout will print entire string
    cout<<ch<<endl;

    char *c=&ch[0];
    cout<<c<<endl;

    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
    
    
             
return 0;
}