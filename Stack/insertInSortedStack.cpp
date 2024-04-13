#include<bits/stdc++.h>
using namespace std;
void Insert_correc_pos(stack<int>&st,int ele){
    if(st.empty()  || st.top()<ele){
        st.push(ele);
        return;
    }

    int top_ele = st.top();
    st.pop();

    Insert_correc_pos(st,ele);

    // backtrack
    st.push(top_ele);
}

void print(stack<int>st){
    while(not st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main(){
 
 stack<int>st;
 

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);

 cout<<"printing before insertion: "<<endl;
 print(st);

 Insert_correc_pos(st,45);

 cout<<"printing after insertion: "<<endl;
 print(st);


 
return 0;
}