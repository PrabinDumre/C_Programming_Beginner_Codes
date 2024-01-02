int main(){
  char ch;
  printf("Enter a character");
  scanf("%c",&ch);
  if(ch>='A'&& ch<='Z'){
    printf("Character is in upper case\n");
  } else if( ch>='a' && ch<='z'){
    printf("Character is in lower case\n");
  } else {
    printf("Invalid character");
  }
  return 0;
