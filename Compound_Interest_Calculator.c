#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    double principal=0.0;
    int years;
    double rate=0.0;
    int timescompound;
    double total;

    printf("Welcome to Compound Interest Calculator!\n");

    printf("Please enter the Principal amount:");
    scanf("%lf",&principal);
    
    printf("Please enter the rate of interest:");
    scanf("%lf",&rate);
    
    printf("Please enter the number of years to be invested:");
    scanf("%d",&years);
    
    printf("Please enter the number of times interest is compound per year:");
    scanf("%d",&timescompound);
    rate=rate/100;
    
    total = principal * pow((1 + rate / timescompound), timescompound * years);
    
    printf("Your return is %lf",total);


    return 0;
}