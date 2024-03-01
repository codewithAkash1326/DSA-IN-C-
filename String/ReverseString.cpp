#include<bits/stdc++.h>
using namespace std;
int main(){
 
 char ch[100];
 cin>>ch;

 int s=0;
 int e=strlen(ch)-1;

 while(s<e){
    swap(ch[s++],ch[e--]);
 }

 cout<<ch;
 
return 0;
}