// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>ar;
//     cout<<ar.size()<<endl;
//     cout<<ar.capacity()<<endl;

//     ar.push_back(1);
//     cout<<ar.size()<<endl;
//     cout<<ar.capacity()<<endl;

//     ar.push_back(2);
//     cout<<ar.size()<<endl;
//     cout<<ar.capacity()<<endl;

//     ar.push_back(5);
//     cout<<ar.size()<<endl;
//     cout<<ar.capacity()<<endl;


//  return 0;
// }





// INPUT IN VECTOR 

/*#include<iostream>
#include<vector>
using namespace std;
int main()
{   int size ;
    cin>>size;
    vector<int>arr;
    for(int i =0;i<size;i++){
        int element;
        cin>>element;
        
         arr.push_back(element);
    }
    // PRINT USING FOR LOOP

    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    // PRINT USING WHILE LOOP
    int idx=0;
    while(idx<size){
        cout<<arr[idx]<<" ";
        idx = idx+1;
    }

 return 0;

}   
*/


/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<" ";
    cin>>size;
    vector<int> arr;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }


    int occurence;
    int key;
    cout<<"enter the key:"<<" ";
    cin>>key;

    for(int i=0;i<size;i++){
        if(key==arr[i]){
            occurence=i;
        }
    }
     cout<<"the last position of the key is  "<<occurence;

    for(int i=size;i>0;i--){
        if(key==arr[i]){
            occurence=i;


            break;
        }
    }
    cout<<"the last position of the key is  "<<occurence;
             
             `66666666666666666666666666666666666666666666666666666666666
return 0;
} 
*/ 



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     vector<int>arr(1000);
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     int count =0;
//     int key ;
//     cout<<"enter the key:  ";
//     cin>>key;
//     for(int i =0;i<size;i++){
//         if(key==arr[i]){
//             count=count +1;
//         }
//     }
//     cout<<"the count of the key number is:  "<<count;
          
// return 0;
// }
 
 



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int size;
//     cout<<"enter the size: ";
//     cin>>size;
//     vector<int>arr(100);
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     int targetsum;
//     cout<<"enter the number:  ";
//     cin>>targetsum;
//     int count =0;
//     for(int idx1=0;idx1<size;idx1++){
//         for(int idx2=idx1+1;idx2<size;idx2++){
//            for(int idx3=idx2+1;idx3<size;idx3++){
//               if(targetsum==arr[idx1]+arr[idx2]+arr[idx3]){
//                 count = count + 1 ;
//              }
//           }
//        }  
//     }
//     cout<<count;           
// return 0;
// }
   
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int size;
//     cin>>size;
//     vector<int>arr(100);
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
    

//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//            if(arr[i]==arr[j]){
//             arr[i]=arr[j]=-1;
              
               
//             }     
//         }
//     }
//     for(int i=0;i<size;i++){
//         if(arr[i]>0){
//             cout<<arr[i];
//         }
//     }
        
             
// return 0;
// }

// #include<iostream>
// #include<vector>
// #include<math.h>
// using namespace std;
// int main(){
//     vector<int>arr(100);
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }

//     int max=INT16_MIN;
//      for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];

//         }
//      }
//      arr.push_back(max);
//      arr.pop_back();


//     max=INT16_MIN;
//      for(int i=0;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//      }cout<<max;


     
             
             
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void reverse(int arr[],int size){
//     int start=0;
//     int end=size-1;
//     while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
    
//     } 
    
// }
// void printarray(int arr[],int size) {
//     for(int i=0;i<size;i++){
//       cout<<arr[i]<<" " ;
        
//     }

// }
    
// int main(){
//     int size;
//     cin>>size;
//     int ar[size]={};
    
    
//     for(int i=0;i<size;i++){
//         cin>>ar[i];
         
//     }

// reverse(ar,size);

// printarray(ar,size);          
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void swapalternate(int arr[],int size){
 
//     for(int i=0;i<size;i=i+2){
//         if(i+1<size){
//           swap(arr[i],arr[i+1]);
//         }
//     }
   
     
// }
// void printarray(int arr[],int size) {
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" " ;  
//     }
// }
    
// int main(){
//     int size;
//     cin>>size;
//     int ar[size]={};
//     for(int i=0;i<size;i++){
//         cin>>ar[i];   
//     }

// swapalternate(ar,size);
// printarray(ar,size);          
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int findunique(int arr[],int size){
//     int ans=0;
//     for(int i=0;i<size;i++){
//         ans =ans^arr[i];

//     } 
//     return ans;
// }           
// int main(){
//     int size;
//     cin>>size;
//     int arr[size]={};
//     for (int i=0;i<size;i++){
//         cin>>arr[i];
//     }

// return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int ans=0;
//     int arr[6]={5,1,2,3,4,2};
//     for(int i=0;i<6;i++){
//         ans=ans^arr[i];
//     }
//     cout<<ans<<endl;
//     for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     for(int i=1;i<6;i++){
//         ans = ans^i;
//     } cout<<ans<<endl;

//       for(int i=0;i<6;i++){
//         cout<<arr[i]<<" ";
//     } cout<<endl;       
             
// cout<< ans;




// }
// sort 0 and 1
/*


#include<iostream>
#include<vector>
using namespace std;
void SortZerosAndOnes(vector<int>&v){
    int zeroscount =0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            zeroscount++;
        }
    }
    for(int i=0;i<v.size();i++){
        if(i<zeroscount){
            v[i]=0;
        }
        else
          v[i]=1;
    }


}

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

    SortZerosAndOnes(v);
    printarray(v);
 
                         
return 0;
}*/




//sort even and odds

/*
#include<iostream>
#include<vector>
using namespace std;

void SortOddAndEven(vector<int>&v){
    int left=0;
    int right = v.size()-1;
    while(left<right){
        if(v[left]%2!=0 && v[right]%2==0){
 
            swap(v[left],v[right]);
            left++;
            right--;
 
        }
        if(v[left]%2==0){
        left++;
        }
        if(v[right]%2!=0){
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

    SortOddAndEven(v);
    printarray(v);
        
return 0;
}  */



/*

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
 */


/*

#include<iostream>
#include<vector>
using namespace std;
bool PrefixSuffixSum(vector<int>&v){
    int total_sum=0;

    for(int i=0;i<v.size();i++){
        total_sum =total_sum+v[i];

    }
    int prefix_sum=0;
    for(int i=0;i<v.size();i++){
        prefix_sum=prefix_sum+v[i];
        int suffix_sum=total_sum - prefix_sum;

        if(prefix_sum==suffix_sum){
            return true;
        }

    } 

    return false;

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

cout<<PrefixSuffixSum(v);

      
return 0;
}

  */



/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size1;
    cout<<"enter the size :"<<endl;
    cin>>size1;
    int arr1[size1]={};
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int size2;
    cout<<"enter the size :"<<endl;
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    int ans[size1+size2];

    int i=0;//will help us to iterate on arr1
    int j=0;//will help us iterate on arr2
    int k=0;//will help us iterate on ans

    while(i<size1 and j<size2){
        if (arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            k++;
            i++;
        }
        else{
            ans[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<size1){
        ans[k]=arr1[i];
        k++;
        i++;

    }
    while(j<size2){
        ans[k]=arr2[j];
        k++;
        j++;
    }


for(int i=0;i<size1+size2;i++){
    cout<<ans[i]<<" ";
}
             
return 0;
}
*/


/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int targetsum;
    cout<<"enter the target sum"<<endl;
    cin>>targetsum;

    int start=0;
    int end=size-1;
    bool found = false;
    while(start<end){
      
      if(arr[start]+arr[end]==targetsum){
        found=true;
        break;
      }

      else if(arr[start]+arr[end]<targetsum){
        start++;
      }

      else{
        end--;
      }


    }
    if(found==true){
        cout<<"yes";
    }else
    cout<<"no";
             
             
return 0;
}
*/




/*

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int difference;
    cout<<"enter the target difference"<<endl;
    cin>>difference;
    bool found=false;

    int i=0;
    int j=1;
    while (i<size and j<size)
    {
        if((abs (arr[i]-arr[j])==difference)){
          found=true;
          break;
        }

        else if((abs(arr[i]-arr[j])<difference)){
            j++;
        }

        else if((abs(arr[i]-arr[j])>difference)){
        i++;
        }
    }

    if(found==true)cout<<"yes";
    else cout<<"no";
    
             
             
return 0;
} */




/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int number;
    cin>>number;
    bool found =false;

    for(int idx1=0;idx1<size;idx1++){
        for(int idx2=1;idx2<size;idx2++){
            if(abs(arr[idx1]-arr[idx2])==number){
                found=true;
                break;
            }
        }

    }
    if(found==true)cout<<"yes";
    else cout<<"no";


return 0;
} 
*/



/*
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int ans[size];
    int i=0;
    int j =size-1;
    int k = size-1;
    while(i<=j){
        if(abs(arr[i])>abs(arr[j])){
            ans[k]=arr[i]*arr[i];
            k--;
            i++;

        }
        else{
            ans[k]=arr[j]*arr[j];
            k--;
            j--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }         
             
return 0;
}
*/


#include<iostream>
#include<vector>
using namespace std;
int count(int arr[],int size,int number){
    int count=0;
    int i=0;
    int j=size-1;

    while(i<j){
        if(abs(arr[i])+abs(arr[j])==number){
            count = count + 1;
            i++;
            j--;
        }
        else if(abs(arr[i])+abs(arr[j])<number){
            i++;
        }
        else{
            j--;
        }
    }
    return count;

}

int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array input"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;

    cout<<count(arr,size,number);
             
             
return 0;
}







 




























