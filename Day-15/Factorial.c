#include<stdio.h>
int factorial(int n);
int main(){
  printf("factorial is %d ", factorial(2));
return 0; 
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact=factorial(n-1);
   int  factorial = fact * n;
    return factorial;
}
