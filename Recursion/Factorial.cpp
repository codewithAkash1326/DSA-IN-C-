#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    //base case
    if(n==1) return 1;
    
    //recursive call
    int ans = n * factorial(n-1);

    return ans;
}
int main(){
 
 cout<<factorial(5);
 
return 0;
}