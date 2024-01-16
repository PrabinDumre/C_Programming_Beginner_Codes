#include<stdio.h>
int power(int p , int n);
int main(){
    int p,n;
    printf("Enter a number : ");
    scanf("%d",&p);
    printf("Enter power of number : ");
    scanf("%d",&n);
    printf("Answer is : %d",power(p,n));
return 0; 
}
int power(int p , int n){
    return p*n;
}