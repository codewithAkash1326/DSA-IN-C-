#include<iostream>
#include<vector>
using namespace std;
// void SortZerosAndOnes(vector<int>&v){
//     int zeroscount =0;

//       for(int i=0;i<v.size();i++){
//           if(v[i]==0){
//              zeroscount++;
//          }
       
//        }
//     for(int i=0;i<v.size();i++){
//            if(i<zeroscount){
//              v[i]=0;
//         }
//         else
//           v[i]=1;
//     }

// }

// optimize solution  using two pointer approach;
void SortZerosAndOnes2(vector<int>&v){
    int left=0;
    int right = v.size()-1;
    while(left<right){
        if(v[left]==1 && v[right]==0){
            // v[left++]=0;
            // v[right--]=1;
            swap(v[left],v[right]);
            left++;
            right--;
 
        }
        if(v[left]==0){
        left++;
        }
        if(v[right]==1){
        right--;
        }
    }
    return ;

}

void printarray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    SortZerosAndOnes2(v);
    printarray(v);
        
return 0;
}