#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    char adj1[30];
    char adj2[30];
    char adj3[30];
    char noun[30];
    char verb[30];
    printf("Enter an adjective (description):");
    fgets(adj1,sizeof(adj1),stdin);
    adj1[strlen(adj1)-1]='\0';
    printf("Enter a noun(person or animal):");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1]='\0';
    printf("Enter an adjective(description):");
    fgets(adj2,sizeof(adj2),stdin);
    adj2[strlen(adj2)-1]='\0';
    printf("Enter a verb(ending w/ -ing):");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1]='\0';
    printf("Enter an adjective(description):");
    fgets(adj3,sizeof(adj3),stdin);
    adj3[strlen(adj3)-1]='\0';

    printf("Today i went to a %s zoo.\n",adj1);
    printf("In an exhibit, I saw a %s\n",noun);
    printf("%s was %s and %s\n",noun,adj2,verb);
    printf("I was %s.",adj3);

    
    return 0;
}