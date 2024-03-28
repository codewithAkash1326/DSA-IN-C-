#include<stdio.h>
#include<string.h>
int main() {
    char str[40];
    scanf("%[^\n]s",str);
    //printf("%s",str);

    //printf("%c",str[3]);

    


    int i=0;
    int size=0;
    while (str[i]!='\0')
    {
        size++;
        i++;
    }
    char str2[50];
    strcpy(str2,str);
    printf("%d\n",strlen(str));
    printf("%d\n",size);
    int k=0;
    int e=size-1;
    while(k<e){
      char temp=str[k];
      str[k]=str[e];
      str[e]=temp;
      k++;
      e--;
    }

    printf("%s",str2);

    
               
               
return 0;
}