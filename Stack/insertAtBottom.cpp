#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st,int pos,int x){
    if(pos==0){
        st.push(x);
        return;
    }

    pos--;
    int top = st.top();

    st.pop();

    insert(st,pos,x);


    // backtrack
    st.push(top);
}


void print(stack<int>st){
    while(not st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
 stack<int>st;
 

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);

 cout<<"printing before insert : "<<endl;
 print(st);

 int pos=st.size();


 insert(st,pos,90);
 cout<<endl;
 cout<<"printing after the insert: "<<endl;
 print(st);
 
 
return 0;
}