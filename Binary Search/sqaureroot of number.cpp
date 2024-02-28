 #include<iostream>
 #include<vector>
 using namespace std;
 long long int squareroot(int key){
    long long int ans =-43445;
    int s=1;
    int e =key;
    long long int mid = s+(e-s)/2;
    while(s<=e){
        if(mid*mid==key){
            return mid;
        }
        else if(mid*mid<key){
            ans =mid;
            s = mid +1;
        }


        else if(mid*mid>e){
            e = mid -1 ;

        }
        mid = s+(e-s)/2;

    }
    return mid;

 }


double doublesolution(int key,int precision,int tempsol){
  double factor = 1;
  double ans = tempsol;

  for(int i=0;i<precision;i++){
    factor = factor/10;

     for(double j=ans; j*j < key; j=j+factor){
        ans = j;
    }


  }
    return ans;

}

 int main(){
              
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    double tempsol=squareroot(key);
    cout<<"answer is  "<<doublesolution(key,3,tempsol);
              
 return 0;
}


