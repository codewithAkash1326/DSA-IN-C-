#include<bits/stdc++.h>
using namespace std;
int lastocc(string str,int size,int idx,char target){
    // base case
    if(idx<0){
        return -1;
    }
   
   //if char found return it
    if(str[idx]==target){
        return idx;
    }
   
   //otherwise check i(ndex-1) index
    return lastocc(str,size,idx-1,target);
}
int main(){
 
  string str="abbdcdde";
  int size=8;
  int idx =size -1;
  int ans=-1;
  char target='d';
  cout<<lastocc(str,size,idx,target);
 
return 0;
}