#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char item[50]="";
    float price=0.0f;
    int quantity=0;
    char currency='$';
    float total=0.0f;
    printf("Which item do you want to buy? ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item)-1]='\0';
    printf("Price of %s: ",item);
    scanf("%f",&price);
    printf("How many %s/s do you want:",item);
    scanf("%d",&quantity);
    total=quantity*price;
    printf("You have to pay %c%.2f.",currency,total);
    
    return 0;
}