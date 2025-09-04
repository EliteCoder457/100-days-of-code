#include <stdio.h>
int main(){
char operator;
float x, y, result;
printf("Enter greater number: ");
scanf("%f", &x);
printf("Enter smaller number: ");
scanf("%f", &y);
printf("Enter operator (+, -, *, /, %%): ");
scanf(" %c", &operator);
switch(operator) {
   case ('+'):
    result=x+y;
    printf("sum: %0.2f",result);
    break;
    case('-'):
    result=x-y;
    printf("difference: %0.2f", result);
    break;
    case ('*'):
    result=x*y;
    printf("multiplication: %0.2f",result);
    break;
    case('/'):
    result=x/y;
    if(y==0){
        printf("division by zero not possible!");
    }
    else{
    printf("division: %0.2f", result);
    }
    break;
    case ('%'):
    int result_modulo=(int)x % (int)y;
    printf("remainer: %d",result_modulo);
    break;
    default:
    printf("invalid operator!");
    break;
}
    return 0;
}
