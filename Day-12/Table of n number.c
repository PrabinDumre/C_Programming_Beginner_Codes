#include<stdio.h>
void table(int a);
int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    
     table(a);
        
return 0; 
}
void table(int a){
    for (int i =1;i<=10;i++){
    
      printf("%d\n",a*i);
    }
}

OR

#include<stdio.h>
int table(int a, int i);
int main(){
    int a , i =1;
    printf("Enter a number :");
    scanf("%d",&a);
    for (i;i<=10;i++){
        int t= table(a, i);
        printf("%d\n",t);
    }
return 0;
}

int table(int a, int i){
    return a*i;
}   
