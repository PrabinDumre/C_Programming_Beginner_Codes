 (BY SELF Entering Marks )
#include<stdio.h>
float percentage(float a , float b , float c);
int main(){
   float per = percentage(60 , 70 , 60); 
    printf("%f",per);
return 0; 
}
float percentage(float a , float b , float c){
    float per = (a+b+c)/ 300 *100;
    return per;
}

      (BY Asking User To Input Marks)
#include<stdio.h>
float percentage(float a , float b , float c);
int main(){
    float a , b , c ;
    printf("Enter number for maths :");
    scanf("%f",&a);
      printf("Enter number for science :");
      scanf("%f",&b);
        printf("Enter number for sanskrit :");
        scanf("%f",&c);
   float per = percentage(a , b , c); 
    printf("%f",per);
return 0; 
}
float percentage(float a , float b , float c){
    float per = (a+b+c)/ 300 *100;
    return per;
}

