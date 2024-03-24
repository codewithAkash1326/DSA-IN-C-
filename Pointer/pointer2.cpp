#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[9]={9,8,7,6,5,4,3,2,1};
    cout<<"address of arrays first element "<<arr<<endl;
    cout<<"value at adress of array first element "<<*arr<<endl;
    cout<<"value at adress of array 4th element "<<*arr+3<<endl;
    cout<<"address of arrays first element "<<&arr[0]<<endl;
    cout<<"address of arrays second element "<<arr+1<<endl;
    cout<<"address of arrays second element "<<*(arr+1)<<endl;
             
             
return 0;
}