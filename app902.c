#include<stdio.h>
#include<string.h>
char callUserName()
{
    //Declarative starting
    char fristName[] = "";
    char lastName[] = "";
    printf("Enter starting of Frist name:");
    scanf("%s", fristName);
    printf("%s\n", fristName);

    printf("Enter starting of Last name:");
    scanf("%s", lastName);
    printf("%s\n", lastName);
}