#include<stdio.h>
void nepali();
void french();
int main(){
    printf("Enter N for Nepali Nationality OR F for French Nationality");
    char ch;
    scanf("%c",&ch);
    if (ch == 'N'){
        nepali();
    } else {
        french();
    }
return 0;
}

void nepali(){
    printf("Namaste\n");
}

void french(){
    printf("Bonjour\n");
}S