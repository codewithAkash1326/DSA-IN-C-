
#include<iostream>
using namespace std;

float area(int r){
    float d = 3.14*(r*r);
    return d;
}
float circumference(int r){
    float f = 2*3.14*r;
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<area(n)<<endl;
    cout<<circumference(n)<<endl;


return 0;
}