 #include<iostream>
 #include<vector>
 using namespace std;

 void prefixsum(vector<int>&arr){
    for(int i=1;i<arr.size();i++){
        arr[i]=arr[i]+arr[i-1];
    }
    return;
 }
 
 void printarray(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
 }

 int main(){
    int size;
    cin>>size;
    vector<int>arr;
    for(int i=0;i<size;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
        
    }
    prefixsum(arr);
    printarray(arr);
       
 return 0;
 }