// print digits of a number

#include<bits/stdc++.h>
using namespace std;
void printdigit(int num){
    // base case
    if(num==0) return;

    // store digits 
    int digit = num%10;

    // recursive call
    printdigit(num/10);
    cout<<digit;
}
int main(){
 
 int num=4321;
 printdigit(num);
 
return 0;
}