#include<stdio.h>

int main(void)
{
    char str[100];
    printf("What is your name? ");
    fgets(str, 100, stdin);
    printf(" Hello, %s\n", str);
}