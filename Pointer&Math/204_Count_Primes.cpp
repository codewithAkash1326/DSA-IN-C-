// Given an integer n, return the number of prime numbers that are strictly less than n.

 

// Example 1:

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0


#include<bits/stdc++.h>
using namespace std;
 


int countPrimes(int n) {
        // If n is 0, return 0
        if (n == 0) return 0;

        // Initialize a boolean vector to keep track of whether each number is prime
        std::vector<bool> isPrime(n, true);

        // 0 and 1 are not prime, so mark them as false
        isPrime[0] = isPrime[1] = false;

        // Initialize a counter for prime numbers
        int cnt = 0;

        // Iterate through numbers from 2 to n-1
        for (int i = 2; i < n; ++i) {
            // If i is prime
            if (isPrime[i]) {
                // Increment the counter for prime numbers
                cnt++;

                // Mark multiples of i as not prime
                int j = i * 2; // Start from 2 * i since i itself is prime
                while (j < n) {
                    isPrime[j] = false;
                    j += i; // Increment j by i to mark multiples of i
                }
            }
        }

        // Return the count of prime numbers found
        return cnt;
    }
 
int main(){
 
 
 
return 0;
}