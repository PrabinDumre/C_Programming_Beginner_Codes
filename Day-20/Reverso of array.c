#include<stdio.h>
int reverse(int *a);
int main(){
    int arr[5] ={2,5,4,6,3};
    int *a = arr;
    reverse (&a);
return 0;
}
int reverse(int *a){
     printf("You entered\n ");
    for (int i=1;i<=5;i++){
       
        printf("%d\n",*(a+i));
    }
    printf("Reverse is \n");
    for(int j =5;j>=1;j--){
        printf("%d\n",*(a+j));
    }
}