#include<stdio.h>
int main(){
    int a;
    do{
        printf("Enter a number :");
        scanf("%d", &a);
        printf("%d", a);

        if(a % 7 ==0){
            break;
        }
    }while(1);
    printf("  is multiple of 7");
return 0;
}