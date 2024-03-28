// #include <stdio.h>
// int main(){

//   int arr[100], p, n;
//     scanf("%d", &n);
    
//   for ( int i = 0 ; i< n ;i ++ ){
//     scanf("%d", &arr[i]);
//     }
//     scanf("%d", &p);
//     arr[p] = arr[p+1];           
        
//   for( int i = 0 ; i< n - 1 ; i++ ) {       
//         printf("%d ", arr[i]);   
//     }    
      
//     return 0;
// }

//matrix transpose

#include<stdio.h>
int main() {
  int a[3][3],b[3][3],c[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&a[i][j]);
    }
  }

  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     scanf("%d",&b[i][j]);
  //   }
  // }


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      c[i][j]=a[j][i];
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d ",c[i][j]);
    }
    printf("\n");
  }
               
               
return 0;
}

 