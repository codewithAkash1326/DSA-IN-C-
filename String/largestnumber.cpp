#include<bits/stdc++.h>
using namespace std;
bool compare(char a,char b){
    return a>b;
}
int main(){
 
 string s="3303459";

 sort(s.begin(),s.end(),compare);
 
 cout<<s;
 
return 0;
}