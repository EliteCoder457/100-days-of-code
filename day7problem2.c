//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main(){
    char x;
    int vowel;
    printf("enter the character: ");
    scanf("%c",&x);
    vowel = (x =='a' || x=='e' || x== 'i' || x== 'o' || x== 'u' ||
    x =='A'|| x=='E' || x== 'I' || x== 'O' || x== 'U');
    if (vowel) {
        printf("%c is a vowel", x);
    }
    else {
        printf("consonant");
    }
 
    
    return 0;
    
}
