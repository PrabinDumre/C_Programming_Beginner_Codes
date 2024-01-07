#include<stdio.h>
int main(){
    int a , b=1, c=1 ;
    printf("enter a number :");
    scanf("%d",&a);
    
    for (a;a>=1;a--){
        b=b*a;
        c=c*b;
        b=1;
    }
    printf("factorial id %d",c);
return 0;
}

       OR

#include<stdio.h>
int main(){
    int i=1,n,fact;
    fact = 1;
    printf("enter a number :");
    scanf("%d",&n);
    for (i;i<=n;i++){
        fact = fact * i;
    }printf("%d",fact);
return 0;
}S