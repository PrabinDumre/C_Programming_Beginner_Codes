#include<stdio.h>
int sum(int a , int b);
int product(int a , int b);
int average(int a , int b);
int main(){
    int a , b;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number :");
    scanf("%d",&b);
    printf("Sum of two number is %d\n ", sum(a,b));
     printf("product of two number is %d\n ",product(a,b));
    printf("average of tw0 number is %d\n", average (a,b));
return 0;
}
int sum(int a , int b){
        return a+b;
}
int product(int a , int b){
        return a*b;
}
int average(int a , int b){
        return (a+b)/2;
}