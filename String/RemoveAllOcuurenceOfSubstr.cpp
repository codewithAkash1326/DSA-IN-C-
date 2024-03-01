// LEETCODE 1910 

// Input: s = "daabcbaabcbc", part = "abc"
// Output: "dab"
// Explanation: The following operations are done:
// - s = "daabcbaabcbc", remove "abc" starting at index 2, so s = "dabaabcbc".
// - s = "dabaabcbc", remove "abc" starting at index 4, so s = "dababc".
// - s = "dababc", remove "abc" starting at index 3, so s = "dab".
// Now s has no occurrences of "abc".




#include<bits/stdc++.h>
using namespace std;
string removeOccurrences(string s, string part) {
        
        while(s.find(part) != string::npos){
         
            int found= s.find(part);
            s.erase(found,part.length());  
           
        }

        return s;
    }


int main(){
 
       string s;
       cin>>s;

       string part;
       cin>>part;

       string ans= removeOccurrences(s,part);

       cout<<ans<<endl;

       
 
 
return 0;
}