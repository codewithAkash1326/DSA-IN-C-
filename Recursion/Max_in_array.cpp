#include<bits/stdc++.h>
using namespace std;
void findMax(vector<int>arr,int size,int idx,int &maxi){
    if(idx==size) return ;

    maxi=max(arr[idx],maxi);
}

int main(){
 
 vector<int>arr={22,88,45,23,65,45};
 int maxi=INT_MIN;
 findMax(arr,6,0,maxi);
 
return 0;
}