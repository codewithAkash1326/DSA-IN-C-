#include<iostream>
#include<string>
using namespace std;
int main(){
    string  s;
    getline(cin ,s);
    int q;
    cin>>q;

    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    while(q--){
        
        char c;
        cin>>c;
        cout<<c<<" present "<<hash[c-'a']<<" times"<<endl;
    }
             
             
return 0;
}