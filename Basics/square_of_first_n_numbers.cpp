#include<iostream>
using namespace std;

int square(int n){
    return n*n;
    
}
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
    cout<<square(i)<<" "<<endl;
    }

return 0;
}