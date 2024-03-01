 #include<bits/stdc++.h>
 using namespace std;
 class Solution {
public:
    // Define a static comparison function to be used in sorting strings
    static bool compare(string a, string b) {
        // Concatenate strings 'a' and 'b' in two different orders
        string t = a + b;
        string u = b + a;

        // Compare the two concatenated strings lexicographically
        // This will effectively sort the strings in non-increasing order
        return t > u;
    }

    // Function to find the largest number formed by concatenating elements of nums
    string largestNumber(vector<int>& nums) {
        // Convert each integer in nums to a string
        vector<string> snums;
        for (auto n : nums) {
            snums.push_back(to_string(n));
        }

        // Sort the strings using the custom comparison function 'compare'
        sort(snums.begin(), snums.end(), compare);

        // If the largest number is "0", return "0" since it's the largest possible number
        if (snums[0] == "0") 
            return "0";

        // Concatenate all the strings in 'snums' to form the result
        string ans = "";
        for (auto str : snums) {
            ans += str;
        }

        // Return the final concatenated string
        return ans;
    }
};


 int main(){
  
  
  
 return 0;
 }