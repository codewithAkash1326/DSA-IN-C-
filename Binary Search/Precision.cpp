#include<bits/stdc++.h>
using namespace std;
int mysqrt(int n){
    int s=0;
    int e=n;
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;

        if(mid*mid <= n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

double precision(int n,int pr){
    double sqrt= mysqrt(n);
     double step = 0.1;
     for(int i=0;i<pr;i++){

        double j=sqrt;

        while(j*j<=n){
          
           sqrt=j; 
           j=j+step;
            
        }
        step/=10;

     }

  return sqrt;

}


int main(){
 
 int n;
 cout<<"enter the number "<<endl;
 cin>>n;

 int pr;
 cout<<"enter the precision number"<<endl;
 cin>>pr;

 double ans=precision(n,pr);
 // cout is not showing full value greater than 5 
 //cout<<ans;

 printf("%.10f",ans);
 
return 0;
}