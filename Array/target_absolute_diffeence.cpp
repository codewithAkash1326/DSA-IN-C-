// simple approach

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



// optimize solution

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter array elements"<<endl;
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
}