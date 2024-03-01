#include<bits/stdc++.h>
using namespace std; 
 

    // Function to count the number of '1's in a string
    int countD(string s){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        return cnt;
    }
    
    // Function to calculate the number of beams based on a vector of strings
    int numberOfBeams(vector<string>& bank) {
        vector<int>device;

        // Count the number of '1's in each string and store in device vector
        for(auto str:bank){
            device.push_back(countD(str));
        }

        int ans=0;
        // Loop through the device vector
        for(int i=0;i<device.size();i++){
            int j=i+1;
            // Multiply the counts of '1's in device[i] and device[j] and add to ans
            while(j<device.size()){
                ans+=device[i]*device[j];
                // If device[j] is 0, move to the next index
                if(device[j]==0){
                    j++;
                }
                else{
                    break;
                }
            }
        }
        return ans; // Return the total number of beams
    }


int main(){
 
 
 
return 0;
}