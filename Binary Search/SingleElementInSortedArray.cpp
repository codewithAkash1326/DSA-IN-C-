#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int s=0;
        int e=nums.size()-1;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(mid %2==0){
             if(s==e) return nums[s];

                if(nums[mid]!=nums[mid+1] && nums[mid] !=nums[mid-1]){
                  return nums[mid];
                  }


                if(mid+1<=e && nums[mid]==nums[mid+1]){
                    s=mid+2;
                }
                else if(mid-1 >=0 && nums[mid]==nums[mid-1]){
                    e=mid;
                }


            }

            else{
                if(mid-1 >=0 && nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
                else if(mid+1 <=e && nums[mid]==nums[mid+1]){
                    e=mid-1;
                }
            }
        }

        return -1 ;

}
int main(){
 
 vector<int>nums={1,1,2,3,3,4,4,8,8};

  cout<<singleNonDuplicate(nums);
 
 
return 0;
}