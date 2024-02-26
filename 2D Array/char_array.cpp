#include<iostream>
#include<vector>
using namespace std;

// length of string
int getlen(char name[]){
    int cnt=0;
    for(int i=0;name[i]!='\0';i++){
        cnt++;
    }
    return cnt;
}





int main(){
    char name[20];
    cin>>name;

    cout<<name<<endl;
    for(int i=20;name[i]!=0;i--){
        cout<<name[i];
    }

    cout<<"the length of string is "<<getlen(name);
             
             
return 0;
}