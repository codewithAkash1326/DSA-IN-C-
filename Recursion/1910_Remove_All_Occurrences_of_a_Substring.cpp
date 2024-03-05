#include<bits/stdc++.h>
using namespace std;
 
   void remove(string &s,string &part){
       int found=s.find(part);

       if(found!=string::npos){
           string left = s.substr(0,found);
           string right= s.substr(found+part.size(), s.size());
           s=left+right;
       }

       else{
           return;
       }

       remove(s,part);
   }

    string removeOccurrences(string s, string part) {
         remove(s,part);
         return s;
    }

int main(){
 
 string s;
 getline(cin,s);

 string part;
 getline(cin,part);

 remove(s,part);
 
return 0;
}