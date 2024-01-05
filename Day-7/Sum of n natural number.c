// BY FOR LOOP
#include<stdio.h>
int main(){
    int i=1,n,p=0,a;
    printf("Enter a number :");
    scanf("%d",&n);
    for (i;i<=n;i=i+1){
       p=p+i;
       a=p;  
    }
     printf(" %d",a);   
return 0;
}

//BY WHILE LOOP
#include<stdio.h>
int main(){
    int i=1,n,p=0,a;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n){
        p=p+i;
        i=i+1;
        a=p;
    }  
    printf("The sum of natural number is %d",a);
return 0;
}

//BY DO...WHILE LOOP
#include<stdio.h>
int main(){
    int i=1,n,p=0,a;
    printf("Enter a number :");
    scanf("%d",&n);
    do{
        p=p+i;
        a=p;
        i=i+1;
    } while(i<=n);
    printf("The sum of natural number is %d",a);
return 0;
}