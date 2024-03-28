// #include<stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) scanf("%d",&arr[i]);
//     //for(int i=0;i<6;i++) printf("%d ",arr[i]);
//     for (int  i = 0; i < n; i++){
//         if(arr[i]<35){
//             printf("%d ",i);
//         }
//     }
               

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int sr[50],i;
//     for ( i = 0; i <=48; i++);
//     {
//         sr[i]=i;
//         printf("\n %d",sr[i]);
//     }
    
               
               
// return 0;
// }

//#include<stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }

//     int ans=0;
//     int max=arr[0];
//     for (int  i = 0; i < n; i++){
//         if(max<arr[i]){
//             ans=i;
//         }
//     }
//     arr[ans]=0;

//     for (int  i = 0; i < n; i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     printf("%d",max);



// return 0;
// }


// #include<stdio.h>
// int main() {
//   int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }
    

//     int ans[n];
//     for (int i =0; i<n; i++){
//         ans[i]=arr[n-1-i];
//     }
    
//     for (int  i = 0; i < n; i++){
//         printf("%d ",ans[i]);
//     }    
               
// return 0;
// }


// #include<stdio.h>

// int main() {
//   int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }
    

//     int s=0;
//     int e=n-1;
//     while (s<=e){
//         int temp=arr[s];
//         arr[s]=arr[e];
//         arr[e]=temp;
//         s++;
//         e--;   
//     }
    
//     for (int  i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }    
               
// return 0;
// }

#include<stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int count=0;
    while(a!=0){
     int last=a%10;
     count++;
     a=a/10;

    }
    printf("%d",count);

    char str[count];
    sprintf(str ,"%d",a);
    int s=0;
    int e=count-1;
    while(s<e){
        if(str[s++]!=str[e--]){
             printf("not palindrome");
             break;

        }
        // else if(str[s]!=str[e]){
        //     printf("not palindrome");
        //     break;
        // }
    }
    printf("palindrome");
       
               
return 0;
}





// #include<stdio.h>

//      void rotate(int arr[], int k,int n) {
//         int temp[n];
//         for(int i=0;i<n;i++){
//             temp[(i+k)%n]=arr[i];
//         }
//         arr = temp;
        
//     }
// int main() {
//   int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++) {
//     scanf("%d",&arr[i]);
//     }
//     int k;
//     scanf("%d",&k);

//     rotate(arr,k,n);

//     return 0;
// }