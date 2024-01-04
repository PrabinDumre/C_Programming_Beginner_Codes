// To print 0 upto n(ask user to enter ) 

//BY WHILE LOOP
#include<stdio.h>
int main(){
    int i=0 , n;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
return 0;
}

//BY FOR LOOP
#include<stdio.h>
int main(){
    int i=0 , n;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i;i<=n;i++){
        printf("%d\n",i);
    }
return 0;
}

//BY DO...WHILE LOOP
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter a number :");
    scanf("%d",&n);
    do{printf("%d\n",i);
    i++;
    }while(i<=n);
return 0;
}
