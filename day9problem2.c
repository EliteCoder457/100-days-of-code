//Write a program to assign grades based on a percentage input.
#include <stdio.h>
int main(){
int x;
printf("Enter your marks: ");
scanf("%d",&x);
if (x>=90){
    printf("Grade A");
}    
if (90>x && x>=80){
    printf("Grade B");
}  
 if (80>x && x>=70){
    printf("Grade C");
} 
if (70>x && x>=60){
    printf("Grade D");
}  
if (60>x && x>=50){
    printf("Grade F");
}
    return 0;
}
