// replace all @ with spaces

#include<bits/stdc++.h>
using namespace std;

void replace(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
        if(ch[i]=='@'){
            ch[i]=' ';
        }
        i++;
    }
}


int main(){

 char ch[100];
 cin>>ch;

 replace(ch);

 cout<<ch;
 
 
return 0;
}