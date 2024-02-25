// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
             
//    sort(v.begin(),v.end());
//        for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }

             
// return 0;
// }



#include<iostream>
#include<vector>
using namespace std;
vector<int>ans;
int convertFive(int n) {
     
    int k;
    while(n>0){
        int last=n%10;
        ans[k--]=last;
        n=n/10;
        
    }
    
    for(int i=0;i<ans.size();i++){
        if(ans[i]==0){
            ans[i]=5;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    convertFive(n);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
             
             
return 0;
}