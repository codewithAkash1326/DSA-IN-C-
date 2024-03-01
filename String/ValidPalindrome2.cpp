// Leetcode 680 valid palindrome 
// Given a string s, return true if the s can be palindrome after deleting at most one character from it.

 

// Example 1:

// Input: s = "aba"
// Output: true
// Example 2:

// Input: s = "abca"
// Output: true
// Explanation: You could delete the character 'c'.
// Example 3:

// Input: s = "abc"
// Output: false


#include<bits/stdc++.h>
using namespace std;
 bool checkpalindrome(string s, int i, int j){
          while(i<=j){
              if(s[i] != s[j]){
                  return false;
              }
              else{
                  i++;
                  j--;
              }
          }
          return true;
      }

    bool validPalindrome(string s) {

        int i=0;
        int j=s.length()-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            
            // s[i]!=s[j]
            // now check string after 1 removel either i index or j index

            else{
                // i index removal -> checking after i+1 to j
                bool ans1= checkpalindrome(s,i+1,j);

                // j index removal -> checking after i to j-1
                bool ans2= checkpalindrome(s,i,j-1);

                return ans1 || ans2; // agar ek bhi true hai to return kr do true using OR operator 
            }
        }

        // agar loop se bahar aa gaye to sab equal h
        return true;
        
    }


int main(){
 
    string s;
    cin>>s;

    if(validPalindrome(s)){
        cout<<"valid palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
 
 
return 0;
}