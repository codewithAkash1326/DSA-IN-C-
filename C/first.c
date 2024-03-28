// #include<stdio.h>

// int main(){
//     float r;
//     scanf("%f",&r);
//     float area = 3.14*(r*r);
//     float circumference=6.28*r;
//     printf(" area is %.2f\n",area);
//     printf("%.2f\n",circumference);
// return 0;
// }

// write a progrsm to calculste the area and circumference of a circle by using the radius as a input by the user

// #include<stdio.h>
// int main() {
//     int a;
//     scanf("%d",&a);

//     int b;
//     scanf("%d",&b);
//     // int sum=a+b;
//     // int difference=a-b;
//     // int product=a*b;
//     // int division=a/b;
//     printf("the sum of a and b is %d\n ",a+b);
//     printf("the difference of a and b is %d\n ",a-b);
//     printf("the product of a and b is %d\n ",a*b);
//     printf("the divison of a and b is %d\n ",a/b);

// return 0;
// }

// #include <stdio.h>

// int main(){
//     int x,y ;
//     printf("enter two number");
//     scanf("%d %d",&x,&y);
//     if (x==y)
//         printf("both nummber is same");
//     if (x<y)
//         printf("x is smaller than y");
//     if (x>y)
//         printf("x is greater than y");

//     return 0;
// }

// #include<stdio.h>
// int main() {
//     int basesalary;
//     scanf("%d",&basesalary);
//     if(basesalary<=10000){
//        float newbsalary=basesalary+(basesalary*20/100)+(basesalary*80/100);
//         printf("%.2f",newbsalary);
//     }
//     else if(basesalary>10001 && basesalary<20000){
//        float newbsalary=basesalary+(basesalary*25/100)+(basesalary*90/100);
//         printf("%.2f",newbsalary);
//     }
//     else if(basesalary>20000){
//        float newbsalary=basesalary+(basesalary*30/100)+(basesalary*95/100);
//         printf("%.2f",newbsalary);
//     }

// return 0;

// }

// #include<stdio.h>
// #include<math.h>
// int main() {
//     int a;
//     scanf("%d",&a);
//     int b;
//     scanf("%d",&b);
//     int c;
//     scanf("%d",&c);
//     int p;
//     scanf("%d",&p);
//     int t;
//     scanf("%d",&t);
//     int u;
//     scanf("%d",&u);

//     printf(" 1st equation solution is %d\n",u+a*t);
//     printf(" 2nd equation solution is %d\n",(u*t)+(a*(t*t))/2);
//     printf(" 3rd equation solution is %.2f\n",(2*a)+sqrt(b+(9*c)));
//     printf(" 4th equation solution is %.2f\n",sqrt((b*b)+(p*p)));

// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     int y;
//     scanf("%d",&y);
//     int z;
//     z=x;
//     x=y;
//     y=z;
//     printf("%d\n",x);
//     printf("%d\n",y);

// return 0;
// }

// #include<stdio.h>
// #include<math.h>
// int main() {
//     int x;
//     scanf("%d",&x);
//     int y;
//     scanf("%d",&y);
//     x=x+y;
//     y=x-y;
//     x=x-y;
//     printf("%d\n",x);
//     printf("%d\n",y);

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a;
//     scanf("%d",&a);

//     if(a%2==0){
//         printf("this is even\n");

//     }
//     else
//     printf("this is odd\n");

// return 0;
// }

// #include<stdio.h>
// int main() {
//         int a,b,c;
//         scanf("%d %d %d",&a,&b,&c);

//         switch(c)
//         {
//         case ( 1):
//           printf("%d",a+b);
//             break;

//         case ( 2):
//           printf("%d",a-b);
//            break;

//         case ( 3):
//           printf("%d",a*b);
//             break;

//         case ( 4):
//           printf("%d",a/b);
//             break;
//         }

// #include<stdio.h>
// int main() {

//     float f;
//     printf("enter the fahrenheit value\n");
//     scanf("%f",&f);

//     float c =5* (f-32)/9;
//     printf("the celcius value is %.2f\n",c);

// return 0;

// }

// #include<stdio.h>
// int main(){
//     char C;

// printf("enter letter\n");
// scanf("%C",&C);
// switch (C){
//     case 'A':
//        // printf("Apple\n");
//        // break;
//        case 'a':
//          printf("apple");
//         // break;
//             // default:
//             //     printf("kuchh nhi ");

// }
// return 0;
// }

// #include<stdio.h>
// int main() {
//     for(int i=1;i<=10;i++){
//         printf("%d ",i);
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int s=1;
//     int i;
//     scanf("%d",&i);
//     while(s<i){
//         printf("%d ",s);
//         s++;
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int n =10;
//     for(int i=2;i<=n;i++){
//           if(i%2==0){
//               printf("%d ",i);
//         }
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int n=10;
//     int i=2;
//     while(i<=n){
//              printf("%d ",i);
//                i=i+2;
//         }

// return 0;
// }

//  #include<stdio.h>
//  int main() {
//    int n=20;
//    int i=2;
// do
// {
//     printf("%d ",i);
//     i=i+2;
// } while (i<=n);

// return 0;
// }

// #include<stdio.h>
// int main() {

//     for(int i=1;i<=10;i++){
//         printf("%d ",i*i);
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int i=1;
//     while(i<=10){
//         printf("%d ",i*i);
//         i++;
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int basic;
//     scanf("%d",&basic);

//     if(basic>=1000){
//     float hra = basic +(basic*25)/100;
//     float da = basic*(90/100);
//     float pf = basic*(30/100);
//     float gross = basic+hra+da+pf;
//     float net =gross - pf;
//     printf("%.2f\n",basic);
//     printf("%.2f\n",hra);
//     printf("%.2f\n",da);
//     printf("%.2f\n",pf);
//     printf("%.2f\n",gross);
//     printf("%.2f\n",net);
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a;
//     scanf("%d",&a);

//     while(a<5){
//         printf("this is true %d\n",a);

//         a++;
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a =10,b=20,c,d;
//     c=(a,b++);
//     d=(b,a++);
//     printf("%d %d %d %d",a,b,c,d);

// return 0;
// }

// #include<stdio.h>
// int main() {
//         int salary;
//         scanf("%d",&salary)  ;
//         float bonus;

//         if(salary<=25000){
//             printf("bonus is %d\n",(salary*20)/100);
//             printf("total salary %d",(salary)+(salary*20)/100);
//         }

//       else if(salary<=50000){
//             printf("bonus is %d\n",(salary*15)/100);
//             printf("total salary %d",(salary)+(salary*15)/100);
//         }

//     else if(salary<=100000){
//             printf("bonus is %d\n",(salary*10)/100);
//             printf("total salary %d",(salary)+(salary*10)/100);
//         }

//     else {
//             printf("bonus is %d\n",(salary*5)/100);
//             printf("total salary %d",(salary)+(salary*5)/100);
//         }

// return 0;
// }

// #include<stdio.h>
// int main() {
//     int a,b,ch;
//     scanf("%d %d %c",&a,&b,&ch);
//     //char ch;
//     //scanf("%c",&ch);

//     switch (ch)
//     {
//     case '+':
//         printf("%d ",a+b);
//         break;
//     case '-':
//     printf("%d ",a-b);

//     case '*':
//     printf("%d ",a*b);

//     case '/':
//     printf("%d ",a/b);

//     }

// return 0;
// }

// sum of n numbers
/*
#include<stdio.h>
int main() {

    int n;
    scanf("%d",&n);

    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    printf("%d ", sum);

return 0;
} */

/*
sum of two numbers
#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d ",a+b);


return 0;
}
*/

// sum of n odd numbers
// #include<stdio.h>
// int main() {
//        int n;
//        scanf("%d",&n);
//        int sum=0;
//        for(int i=1;i<=n;i+=2){
//         sum= sum+i;
//        }
//        printf("%d ",sum);

// return 0;
// }

/*
// sum of 1 to n odd numbers
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=1;count<n;i+=2){
        sum+=i;
        count++;
    }
    printf("%d ",sum);


return 0;
}
*/

/*
average of three numbers
#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int average=(a+b+c)/3;

    printf("%d",average);



return 0;
}
*/

/*
// average of n natural number
#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    float sum=0;
    int count =0;
    for(int i=0;i<=n;i++){
        sum+=i;

    }
    float average=sum/n;
    printf("%f ",average);

return 0;
}
*/

/*
#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c){
        printf("this is minimum %d ",a);nn
    }

    else if(b<a && b<c){
        printf("this is minimum %d ",b);
    }
    else{
     printf("this is minimum %d ",c);


    }


return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int num1, num2, num3, max, min;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assume the first number to be maximum and minimum
    max = num1;
    min = num1;

    if(num2 > max) {
        max = num2;
    }
    if(num3 > max) {
        max = num3;
    }

    if(num2 < min) {
        min = num2;
    }
    if(num3 < min) {
        min = num3;
    }

    printf("Largest number is %d\n", max);
    printf("Smallest number is %d", min);

 return 0;
}
*/

/*
// area of triangle
#include<stdio.h>
#include<math.h>
int main() {
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);

    float s = (a+b+c)/2;

    float area = sqrt(s*((s-a)*(s-b)*(s-c)));
    printf("%f ",area);


return 0;
}
*/

/*
// area of rectangle
#include<stdio.h>
int main() {
    double a,b;
    scanf("%lf%lf",&a,&b);
    double area=a*b;
    printf("%.2lf",area);


return 0;
}
*/

/*
// leap year
#include<stdio.h>
int main() {
    int year;
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||year%400==0){


    printf("this is leap year");
    }
    else{
        printf("not leap year");
    }


return 0;
}
*/

/*
// prime number

#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if(num == 0 || num == 1) {
        printf("%d is not a prime number.", num);
    }
    else {
        for(i=2; i<=num/2; i++) {
            if(num % i == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            printf("%d is a prime number.", num);
        }
        else {
            printf("%d is not a prime number.", num);
        }
    }

 return 0;
}
*/

// #include<stdio.h>
// int main() {

//     int a,b;
//     scanf("%d%d",&a,&b) ;
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     printf("%d %d",a,b) ;

// return 0;
// }

// #include <stdio.h>

// int main() {
//    int balance = 1000;
//    int choice, amount;

//    printf("Welcome to MyBank!\n");

//    while (1) {
//       printf("1. Check balance\n");
//       printf("2. Deposit\n");
//       printf("3. Withdraw\n");
//       printf("4. Exit\n");
//       printf("Enter your choice: ");
//       scanf("%d", &choice);

//       switch (choice) {
//          case 1:
//             printf("Your balance is %d\n", balance);
//             break;
//          case 2:
//             printf("Enter amount to deposit: ");
//             scanf("%d", &amount);
//             balance += amount;
//             printf("Deposit successful. Your balance is %d\n", balance);
//             break;
//          case 3:
//             printf("Enter amount to withdraw: ");
//             scanf("%d", &amount);
//             if (amount > balance) {
//                printf("Insufficient balance\n");
//             }
//             else {
//                balance -= amount;
//                printf("Withdrawal successful. Your balance is %d\n", balance);
//             }
//             break;
//          case 4:
//             printf("Thank you for banking with us.\n");
//             return 0;
//          default:
//             printf("please select the right key\n");
//             break;
//       }
//    }

// return 0;
// }

// #include<stdio.h>

// void check(int password,int key);
// void check(int password,int key){
//     if(password==key){
//         printf("password is matched");
//     }
//     else {
//         printf("password is incorrect");
//     }

// }
// int main() {
//     int key;
//     scanf("%d\n",&key);
//     int pass;
//     scanf("%d",&pass);
//     check(pass,key);

// return 0;

// }

// #include <stdio.h>

// int primenumber(int number)
// {
// 	int i;

// 	for (i = 2; i <= number / 2; i++) {
// 		if (number % i != 0)
// 			continue;
// 		else
// 			return 1;
// 	}
// 	return 0;
// }

// int main()
// {
// 	int num = 7;

// 	int res = primenumber(num);
// 	if (res == 0)
// 		printf("%d is a prime number", num);
// 	else
// 		printf("%d is not a prime number", num);
// }

// #include<stdio.h>
// int main() {
//         int n;
//         scanf("%d",&n)  ;

//         int count=0;
//         int reverse=0;
//     while(n>0){
//      int last = n%10;
//      reverse=reverse*10 +last;
//      count++;
//      n=n/10;
//     }

//     printf("number of digits are %d\n",count);
//     printf("reverse of the number is %d\n",reverse);

// return 0;
// }

// #include<stdio.h>
// int main()
// {
//  int n1=0,n2=1,n3,number;
//  printf("Enter the number of elements:");
//  scanf("%d",&number);

// printf("%d \n",n1);
// printf("%d \n",n2);
//  for(int i=2;i<number;++i)
//  {

//   n3=n1+n2;
//   printf("%d\n",n3);
//   n1=n2;
//   n2=n3;
//  }
// return 0;
// }

// #include<stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }

// return 0;
// }

// #include<stdio.h>
// int main() {
//         int n;
//         scanf("%d",&n);
//         for(int i=0;i<n;i++){
//           for(int j=n;j>i;j--){
//             printf("*");
//           }
//           printf("\n");
//         }

// return 0;
// }

// #include <stdio.h>

// int main() {
//     int i, j,num;
//     scanf("%d",&num);
//     for (i = 1; i <= num; i++) {
//         for (j = 1; j <= num; j++) {
//             printf("%d ", i*j);
//         }
//         printf("\n");
//     }
// return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int isPrime(int num) {
//     int i;

//     for (i = 2; i <= sqrt(num); i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int isArmstrong(int num) {
//     int originalNum, remainder, result = 0, n = 0, power;
//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         power = round(pow(remainder, n));
//         result += power;
//         originalNum /= 10;
//     }

//     if (result == num) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int isPerfect(int num) {
//     int i, sum = 0;
//     for (i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     if (sum == num) {
//         return 1;
//     }
//     else {
//         return 0;
//     }
// }

// int main() {
//     int num, isPrimeResult, isArmstrongResult, isPerfectResult;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
//     isPrimeResult = isPrime(num);
//     isArmstrongResult = isArmstrong(num);
//     isPerfectResult = isPerfect(num);

//     if (isPrimeResult == 1) {
//         printf("%d is a prime number.\n", num);
//     }
//     else {
//         printf("%d is not a prime number.\n", num);
//     }

//     if (isArmstrongResult == 1) {
//         printf("%d is an Armstrong number.\n", num);
//     }
//     else {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     if (isPerfectResult == 1) {
//         printf("%d is a perfect number.\n", num);
//     }
//     else {
//         printf("%d is not a perfect number.\n", num);
//     }

// return 0;
// }

/*#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    float arr[n];
    for(int i=0;)



return 0;
}*/

// Question 2

// #include<stdio.h>
// int main() {
//     int arr[5] ={1,2,3,4,5};
//     int *pr=arr;
//     printf("%d",*pr++);
//     printf("%d",*++pr);

// return 0;
// }

// #include<stdio.h>

// int sum(int arr[6]){
//     int su=0;
//      for(int i=1;i<6;i++){
//         if(i%2==0){
//             su=su+arr[i];
//         }
//      }
//      return su;
// }

// int main() {
//     int arr[6];
//     for(int i=0;i<6;i++){
//         scanf("%d",&arr[i]);
//     }
//     int ans=sum(arr);
//     printf("%d",ans);

// return 0;
// }

// #include <stdio.h>
// void swap(int* a, int* b)
// {
// 	int temp = *a;
// 	*a = *b;
// 	*b = temp;
// }
// void reverse(int array[], int arraysize){

// 	int *p1 = array,
// 	*p2 = array + arraysize - 1;
// 	while (p1 < p2) {
// 		swap(p1,p2);
// 		p1++;
// 		p2--;
// 	}
// }
// int main()
// {
// 	int array[] = { 1,2,3,4,5,6};
// 	reverse(array, 6);
//     for(int i=0;i<6;i++){
//         printf("%d ",array[i]);
//     }
// 	return 0;
// }

#include <stdio.h>
int main()
{
    int a[100][100], b[100][100], c[100][100], n, i, j, k;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
