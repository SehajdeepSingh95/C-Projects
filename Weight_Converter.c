#include<stdio.h>
#include<stdlib.h>

int main(void){
    int choice;
    float pound;
    float kilogram;
    
    printf("Welcome to Weight Converter!\n");
    printf("1, For Kilogram to Punds.\n");
    printf("2, For Pounds to Kilogram.\n");
    printf("Enter a choice (1 or 2)");
    scanf("%d",&choice);
    if(choice==1){
        printf("Please enter the weight in Kilogram: ");
        scanf("%f",&kilogram);
        pound=kilogram*2.20462;
        printf("Your Weight in Pound is %.2f pound",pound);
    }
    else if (choice==2){
        printf("Please enter the weight in Pound: ");
        scanf("%f",&pound);
        kilogram=pound/2.20462;
        printf("Your Weight in Kilogram is %.2f Kg",kilogram);
    
    }
    else{
        printf("Invalid Choice! Please enter 1 or 2 only.");
    }
    
    return 0;
}