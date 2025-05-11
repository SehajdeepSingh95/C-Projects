#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("Welcome to Basic Calculator!\n");
    double num1;
    double num2;
    double result;
    char operation;
    printf("Please enter the first number: ");
    scanf("%lf",&num1);
    printf("Please enter the second number: ");
    scanf("%lf",&num2);
    printf("Please enter operation you want to be done('+','-','*','/'): ");
    scanf(" %c",&operation);
    switch (operation)
    {
    case '+':
        result=num1+num2;
        printf("%lf",result);
        break;
    case '-':
        result=num1-num2;
        printf("%lf",result);
        break;
    case '*':
        result=num1*num2;
        printf("%lf",result);
        break;
    case '/':
        result=num1/num2;
        printf("%lf",result);
        break;
    
    default:
        printf("Please enter the valid operation only!");
        break;
    }
    return 0;
}