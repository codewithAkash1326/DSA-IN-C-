#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    int basic[4]={2,3,4,5};
    array<int,5>arr={1,2,3,4,5};
    cout<<arr.size()<<endl;

    //it will return number which is present at index
    cout<<arr.at(4)<<endl;

    // it will tell the array is empty or not in boolean form
    cout<<arr.empty()<<endl;

    // it will return the first element
    cout<<arr.front()<<endl;

    // it will return the last element
    cout<<arr.back()<<endl;



             
             
return 0;
}