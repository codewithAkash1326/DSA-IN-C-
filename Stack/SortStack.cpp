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

void sort(stack<int>&st){
    if(st.empty())return;

    int top=st.top();
    st.pop();

    sort(st);

    // backtrack
    Insert_correc_pos(st,top);
}

int main(){
 
 stack<int>st;
 

 st.push(10);
 st.push(50);
 st.push(30);
 st.push(900);
 st.push(55);
 st.push(60);

 sort(st);


 print(st);

 
 


 
return 0;
}