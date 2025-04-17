#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("===^^==\n");
    printf("Welcome to the decimal to the Hexadecimal converter!\n");
    
    int int_number;
    scanf("%d",&int_number);
    printf("The decimal representaion:%9d\n",int_number);
    printf("Convert to hexadecimal:%9X\n",int_number);

    printf("===^^==\n");
    return 0;
}