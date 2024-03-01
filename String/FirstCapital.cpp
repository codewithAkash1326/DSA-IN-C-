#include<bits/stdc++.h>
using namespace std;
int main(){
 
char ch[100];
cin.getline(ch,100);
ch[0]=ch[0]-32;
for(int i=1;i<100;i++){
    if(ch[i]==' '){
        ch[i+1]=ch[i+1]-32;
    }
}
cout<<ch;
 
 
return 0;
}