/*pattern
****
****
****
         

#include<iostream>
using namespace std;

int main (){

int n;
cin>>n;
for (int i= 1; i <n; i++){

    for(int j = 1;j<=n;j++){
        cout<<"*";
    }cout<<endl;
}


return 0;
}     */

/* pattern
*****
*   *
*   *
*   *
*   *


#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int row =1;row<=n;row++){
       for(int col = 1;col<=n;col++){
         if(row==1||row==n ||col==1||col==n ){
            cout<<"*";
         }else
         {
            cout<<" ";
         }
         

       }cout<<endl;


    }




    return 0;
}     */



/*pattern
*
**
***
****
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    } 


    return 0;
}     */




/*pattern
******
*****
****
***
**
*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j =1;j<=(n-i+1);j++){
            cout<<"*";
        }cout<<endl;
    }


    return 0;
}   */


/*pattern
    *
   ***
  *****
 *******
*********



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n;i++){
       for(int space =1;space<=n-i;space++){
        cout<<" ";
       }

       for(int j =1;j<= 2*i-1;j++){
         cout<<"*";
       }cout<<endl;

    }


    return 0;
}  */




/*pattern
for input 6
123456
234561
345612
456123
561234
612345


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i =1;i<=n;i++){
       for(int j = i;j<=n;j++){
        cout<<j;
       }

       for(int j =1;j<=i-1;j++){
        cout<<j;
       }cout<<endl;

    } 

    return 0;
}   */



    




