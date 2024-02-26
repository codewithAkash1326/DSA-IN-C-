class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int start=0;
        int end=row*col-1;
        int mid=start+(end-start)/2;

        while(start<=end){
            int element = matrix[mid/col][mid%col];
            if(element==target){
                return 1;
            }

            else if(element<target){
                start=mid+1;

            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return 0;
    }
};

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>matrix[n][m];

    int target;
    cin>>target;

  
             
             
return 0;
}