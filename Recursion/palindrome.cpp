#include<bits/stdc++.h>
using namespace std;
bool check(string str,int s,int e){
    if(s>=e) return true;

    if(str[s]!=str[e]){
        return false;
    }

    check(str,s+1,e-1);

}
int main(){
 
 string str="mama";
 int s=0;
 int e=str.size()-1;
 if(check(str,s,e)) cout<<"palindrome";
 else cout<<"not palindrome";
 
return 0;
}