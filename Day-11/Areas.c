#include<stdio.h>
int square (int area);
int rectangle (int a , int b );
int circle (int area);

int main(){
      int a , b ;
      float r;
      printf("Enter lengthe :");
      scanf("%d",&a);
      square(a);
      printf("Enter breadth ");
      scanf("%d",&b);
      rectangle(a , b);
      printf("Enter radius : ");
      scanf("%f",&r);
      circle(r);

return 0; 
}

int square (int a){
    printf("%d\n",a*a);
}

int rectangle (int a , int b){
    printf("%d\n",a*b);
}

int circle (int r){
    printf("%f\n",3.14*r*r);
}