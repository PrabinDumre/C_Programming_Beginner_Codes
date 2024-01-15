#include<stdio.h>
int temp(int p);
int main(){
    int p;
    printf("Enter temperture in celsius : ");
    scanf("%d",&p);
    temp(p);
return 0; 
}
int temp(int p){
    if(p=16){
        printf("It is cold");
    } else {
        printf("It is hot");
    }
}