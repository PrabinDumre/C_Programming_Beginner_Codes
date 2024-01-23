#include<stdio.h>
void printNumbers(int *arr, int n);
int main(){
  int arr[] ={0,1,2,3,4,5};
  printNumbers(arr,6);
return 0;
}
void printNumbers(int *arr, int n){
  for (int i=0;i<=n;i++){
    printf("%d\n",arr[i]);
  }
  printf("\n");
}