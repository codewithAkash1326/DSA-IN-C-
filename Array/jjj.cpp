#include<iostream>
#include<vector>
using namespace std;

    int removeElement(vector<int>& nums, int val) {
        int count =0;
        int k =nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.pop_back();
                 
               
            }

        }
 

    }





int main(){
    int n;
    cout<<"enter the size"<<endl;
    cin>>n;
 
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int val;
    cout<<"enter the val"<<endl;

    removeElement(nums,val);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
             
             
return 0;
}