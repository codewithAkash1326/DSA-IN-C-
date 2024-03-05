// print all index of all occurence of a target in array
#include<bits/stdc++.h>
using namespace std;
void Occurence(vector<int>arr,int size,int idx,int target){
    // base case
    if(idx==size) return;

    // printing index of the target(processing)
    if(arr[idx]==target){
        cout<<"found at: "<<idx<<endl;
    }

    // recursive call
    Occurence(arr,size,idx+1,target);
}

int main(){
 
 vector<int>arr={10,20,10,30,10,40};
 int target=10;
 Occurence(arr,6,0,target);
return 0;
}