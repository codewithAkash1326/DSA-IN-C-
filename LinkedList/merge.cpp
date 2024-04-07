#include<bits/stdc++.h>
using namespace std;
int main(){
 
 vector<int>ar1={2,4,3,0,0,0};
 vector<int>ar2={9,1,3};


 vector<int>ans;

 vector<int>f;
//  for(int i=0;i<ar1.size();i++){
//     if(ar1[i]==0){
//         break;
//     }
//     else{
//         f.push_back(ar1[i]);
//     }
//  }


int left=0;
 int right =0;
 int pos=0;

 while((left<ar1.size() && ar1[left]!=0) && right<ar2.size()){
    if(ar1[left]>ar2[right]){
        // ans.push_back(ar2[right]);
        swap
        right++;
    }

    else{
        ans.push_back(f[left]);
        left++;
    }
 }

 while()
 
return 0;
}