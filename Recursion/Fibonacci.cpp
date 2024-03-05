// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,144
#include<bits/stdc++.h>
using namespace std;
int fibonaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int ans=0;
     ans=fibonaci(n-1) + fibonaci(n-2);

     return ans;
}
int main(){
 
 cout<<fibonaci(7);
 
return 0;
}