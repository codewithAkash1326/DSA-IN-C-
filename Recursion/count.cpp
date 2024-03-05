// n =5
// 5,4,3,2,1
#include<bits/stdc++.h>
using namespace std;
void count(int n){
    // base case
    if(n==0) return ;
    
    cout<<n<<" ";
    
    //recursive call
    count(n-1);
}
int main(){
 
 count(5);
 
return 0;
}