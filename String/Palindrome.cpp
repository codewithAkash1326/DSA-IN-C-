#include<bits/stdc++.h>
using namespace std;
bool palindrome(char ch[]){
    int s=0;
    int e=strlen(ch)-1;
    while(s<e){
        if(ch[s]==ch[e]){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
 
 char ch[50];
 cin>>ch;

 if(palindrome(ch)){
    cout<<"This is palindrome";
 }
 else{
    cout<<"This is not palindrome";

    
 }
 
return 0;
}