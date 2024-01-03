# include<stdio.h>
int main(){
  int n ,a, sum = 0 , p;
  printf("enter a number :");
  scanf("%d",&n);
  a = n;
  while (n>0){
  p = n % 10 ;
  sum = sum + (p*p*p) ;
  n=n/10;
}
if (a==sum)
  printf("Number is armstrong");
 else 
  printf("Number is not armstrong");
    return 0;
}
