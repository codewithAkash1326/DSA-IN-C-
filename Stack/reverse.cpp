#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&st,int x){
    if(st.empty()){
        st.push(x);
        return;
    }

     
    int top = st.top();

    st.pop();

    insert(st,x);

    // backtrack
    st.push(top);
}


void reverse(stack<int>&st,int pos){
    if(pos==0) return;

    pos--;
    int top=st.top();

    st.pop();

    reverse(st,pos);
     
    insert(st,top);
 
   


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


 //insert(st,90);
 reverse(st,pos);
 cout<<endl;
 cout<<"printing after the insert: "<<endl;
 print(st);
 
 
return 0;
}