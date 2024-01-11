#include<stdio.h>
int main(){
    int a=1 , b , c=0;
    printf("Enter a number : ");
    scanf("%d",&b);
    for(a;a<=b;a++){
         if(b % a == 0){
         c++;}
         }
         if(c ==2)
        {
        printf("Prime ");
    } else {
        printf("Composite ");
    }  
return 0; 
}

OR 

#include<stdio.h>
int main(){
    int a , b , c; 
    printf("Enter a number : ");
    scanf("%d",&a);
    for (b=a-1;b>1;b--){
        c=a%b;
        if (c==0){
            break;
        }
    }
    if(c!=0){
        printf(" prime");
    } else {
        printf("Not prime");
    }
return 0; 
}