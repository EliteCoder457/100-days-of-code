//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character
#include <stdio.h>
int main(){
char c;
printf("enter the character: ");
scanf("%c",&c);
if (c>='A' && c<='Z'){
    printf("it is a upper case alphabet");
}
else if (c>='a' && c<='z'){
    printf("it is a lowercase alphabet");
}
else if (c>='0' && c<='9' ){
    printf("it is a digit");
}
else{
    printf("it is a special charcater");
}
    
    return 0;
}
