#include<bits/stdc++.h>
using namespace std;
int main(){
 
     string name;
     cin>>name;
     

     // length of string
     cout<<"Length of string: "<<name.length()<<endl;

     // check empty string 
     cout<<"String is empty or not: "<<name.empty()<<endl;

     // check particular index using  *at* property
     cout<<"value at 0 index: "<<name.at(0)<<endl;

     // Access the first character
     cout<<"Printing first character: "<<name.front()<<endl;

     // Access the last character
     cout<<"Printing last character: "<<name.back()<<endl;

     // Append 
      cout<<"append string "<<endl;
     string firstname="Akash";
     string lastname="Chaudhary";

     // printing before append
     cout<<firstname<<endl;
     cout<<lastname<<endl;

     firstname.append(lastname);

     // printing after append
     cout<<firstname<<endl;
     cout<<lastname<<endl;
       

     // Erase string 
     cout<<"Erase string"<<endl;
     string str="I AM AKASH CHAUDHARY";
     str.erase(0,5); // first is starting index and second is the number of char


     // after the erase
     cout<<str<<endl;

      cout<<"Insert string "<<endl;
     // inserting a new insert at a index
     string s1="Akash Chaudhary";
     string s2="kumar ";
     s1.insert(6,s2);

     // after inserting
     cout<<s1<<endl;


    // push_back -> it will push a element in last of the stirng
    cout<<"push back element:"<<endl;

    string n="Akash";
    cout<<"before pushback: "<<n<<endl;
    n.push_back('C');
    cout<<"after pushback: "<<n<<endl;


    // popback -> it will delete last char in the string
    cout<<"popback: "<<endl;
    n.pop_back();
    cout<<"after popback : "<<n<<endl;


    // find -> it will find a string into another string
    cout<<"Finding string: "<<endl;
    string a="Akash chaudhary";
    string b="akash";

    if(a.find(b)==string::npos){
     cout<<"Not found"<<endl;
    }
    else {
     cout<<"found"<<endl;
    }

    // compare -> compare two strings
    cout<<"compare strings: "<<endl;
    string a1="akash";
    string b1="Akash";

    if(a1.compare(b1)==0){
        cout<<"Matching"<<endl;
    }
    else{
        cout<<"not matching"<<endl;
    }
    

    // substr-> for substring

    string c1="I AM AKASH";
    string c2=c1.substr(5,5);

    cout<<"Substring is :"<<c2<<endl;




 
return 0;
}