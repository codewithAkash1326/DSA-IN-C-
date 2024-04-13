#include<bits/stdc++.h>
using namespace std;
void getmiddle(stack<int>&st,int &pos, int &ans){
    if(pos==1){
        ans = st.top();
        return;
    }

    pos--;
    int top = st.top();
    st.pop();

    getmiddle(st,pos,ans);

    st.push(top);
}
int main(){
 
 stack<int>st;

 st.push(10);
 st.push(20);
 st.push(30);
 st.push(40);
 st.push(50);
 st.push(60);


 int pos=0;
 int ans=-1;
 int size= st.size();

 if(st.empty()) {
    cout<<"stack is empty"<<endl;

    return 0;
 }

 if(size &1){
    pos = size/2 +1;
 }

 else{
    pos=size/2;
 }

  getmiddle(st,pos,ans);

  cout<<ans<<endl;

 
 
}