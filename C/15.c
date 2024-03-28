// #include<stdio.h>

// int main(){
//     int i=0;
//     int size;
//     scanf("%d",&size);
//     int arr[100];
//     for(i =0;i<size;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max =arr[0];
//     for(int idx=1;idx<size;idx++){
//         if(arr[idx]>max){
//             max = arr[idx];
//         }

//     }
//     printf("maximum is :%d",max);


//     return 0;
// }



#include<stdio.h>
int main() {
  int a[3][3],b[3][3],c[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&b[i][j]);
    }
  }

int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        sum=sum+a[i][j]*b[j][i];
    }
}

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d",&b[i][j]);
    }
  }






  return 0;
}
