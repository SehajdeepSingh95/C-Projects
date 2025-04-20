#include<stdio.h>
#include<stdlib.h>
float fact(float j){
    float result=1;
for (float i = 2; i <=j; i++)
{
    result=result*i;
}
return result;
}

float main() {
    printf("Welcome to the NCR finding calculator!\n");
    float n;
    printf("Please enter the value of n: ");
    scanf("%f", &n);
    float r;
    printf("Please enter the value of r: ");
    scanf("%f", &r);
    float nfact=fact(n);
    float rfact=fact(r);
    float n_rfact=fact(n-r);
    float factorial=nfact/(n_rfact*rfact);
    printf("%f",factorial);

    return 0;
}