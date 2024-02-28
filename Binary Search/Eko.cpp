
#include<bits/stdc++.h>
using namespace std;
// n=4 m=7 20,15,10,17
bool isfind(vector<long long int>&v, long long int mid, long long int blade){
    long long int woodSum=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>mid){
            woodSum+=v[i]-mid;
        }
    }

    
    if(woodSum>=blade){
        return true;
    }

    else if(woodSum<blade){
        return false;

    }
}

int main(){
 
 long long int n;
 cin>>n;

 long long int m;
 cin>>m;

 vector<long long int>v;
 for(int i=0;i<n;i++){
   int ele;
   cin>>ele;
    v.push_back(ele);

 }

  long long int s=0;
  long long int end=0;
 long long int maxi=-1;
 for(int i=0;i<n;i++){
    if(v[i]>maxi){
        maxi=v[i];
    }
 }
 end=maxi;

 long long ans=-1;
 long long int mid=s+(end-s)/2;

 while(s<=end){
    if(isfind(v,mid,m)){
        ans=mid;
        s=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=s+(end-s)/2;

 }
 cout<<ans;
 
return 0;
}