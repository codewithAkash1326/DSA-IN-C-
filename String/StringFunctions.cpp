#include<iostream>
#include<string>
#include<array>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str="akash";
    string str1="chaudhary";

    // it will reversee the string
    //reverse(str.begin(),str.end());

    //it will display the string from start index to end index given by user
    cout<<str.substr(0,3)<<endl;

    //it will display the string form given start index to last index
    cout<<str.substr(1)<<endl;

    //we can add two string using '+' operator
    cout<<str+str1<<endl;
    
    //we can append str1 to str
    str+=str1;
    
//     it will add s2 in s1
//    char s1[20]="akash";
//    char s2[20]="chaudhary";
//    strcat(s1,s2);

   // it will gives size of string
    string s="akk";
    cout<<s.size()<<endl;

    int a=123;
    string nu =to_string(a);
    char ch='1';
    cout<<nu+ch;

    



             
return 0;
}