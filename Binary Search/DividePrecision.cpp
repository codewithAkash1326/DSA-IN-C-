#include<bits/stdc++.h>
using namespace std;
int divi(int n,int k){
    int start=0;
    int end=n;
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2;

        if(k*mid<=n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    return ans;
}

double precision(int n,int k,int pr){
    double multi= divi(n,k);
    double step=0.1;
   
    for(int i=0;i<pr;i++){
      
      double j= multi;

      while(j*k<=n){
          
          multi=j;
          j=j+step;

      }

      step/=10;

    }

    return multi;

}

int main(){
 
 int n;
 cout<<"enter the dividend"<<endl;
 cin>>n;

 int k;
 cout<<"enter the divisor"<<endl;
 cin>>k;


 int pr;
  cout<<"enter the precision"<<endl;
 cin>>pr;

 double ans=precision(n,k,pr);

 cout<<ans;

 
return 0;
}