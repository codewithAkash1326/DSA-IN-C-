
//  Leetcode 1047

//  Input: s = "abbaca"
// Output: "ca"
// Explanation: 
// For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.  The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".


#include<bits/stdc++.h>
using namespace std;

string removeDuplicates(string s) {
        string ans="";

        int index=0;

        while(index<s.length()){
           
        // ans ka sabse last element equal ho string ke current index element to ans ka last char delete kr fo
        if(ans.length()>0 && ans[ans.length()-1]==s[index]){
            ans.pop_back();
        }

        else{
            ans.push_back(s[index]);
        }
          index++;
        }
        
      return ans;
    }


int main(){
 
 string s;
 getline(cin , s);

 cout<<removeDuplicates(s);
 
return 0;
}