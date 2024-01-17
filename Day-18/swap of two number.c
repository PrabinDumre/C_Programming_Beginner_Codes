#include<stdio.h>
int swap(int a , int b);
int _swap(int *a , int *b);
int main(){
int a = 2,b = 3;
   swap(a,b);
   _swap(&a , &b);
   printf("*a = %d and *b = %d\n",a , b);
return 0; 
}
int swap(int a , int b){
    int temp = a;
    a = b;
    b= temp;
     printf("a = %d  and  b = %d\n", a , b);
}
int _swap(int *a , int *b){
    int t = *a;
    *a = *b;
    *b = t;
    return t;
}