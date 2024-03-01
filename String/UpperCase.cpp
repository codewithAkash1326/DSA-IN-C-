#include<bits/stdc++.h>
using namespace std;

void uppercase(char ch[]){
    int i=0;
    while(ch[i]!='\0'){
       if(ch[i]>='a' && ch[i]<='z'){
                ch[i]=ch[i]-32;
        
       }
       i++;
    }

}
int main(){
 
   char ch[100];
   cin.getline(ch,100);

   int size=strlen(ch);
   
   uppercase(ch);
   cout<<ch;


 
return 0;
}