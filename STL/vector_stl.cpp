#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    // v.capaacity tells the capacity of vector
    cout<<"capacity is "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity is "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"capacity is "<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"capacity is "<<v.capacity()<<endl;
   
   // it will copy the last vector element
    vector<int>sec(v);
    for(int i=0;i<sec.size();i++){
        cout<<sec[i]<<" ";
    }cout<<endl;
    

    // it will return the size of the vector
    cout<<"size is "<<v.size()<<endl;
             
    // it will return the first element
    cout<<"first element "<<v.front()<<endl;

    //it will return the last element
    cout<<"last element "<<v.back()<<endl;
 
    // pop back will delete the last element
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    // clear will clear the all elements
    v.clear();
 
    
    

             
return 0;
}