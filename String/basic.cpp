#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){

// define a string 
    // string str="akash";
    // string str1("chaudhary");
    // cout<<str<<" "<<str1<<endl; 


string str;
// it will take input first word and it will not take input when space 
//cin>>str;

//it will take any string with space separated words
//getline(cin,str);
//cout<<str<<endl;

// char ch='a'; 
// cout<<int(ch);



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