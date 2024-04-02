#include<stdio.h>
int main(void)
{
    int x;
    int y;
    printf("Enter first number 'x': ");
    scanf("%d",&x);
    printf("Enter second number 'y': ");
    scanf("%d",&y);
    if (x>y)
    {
        printf("x is greater than y");
    }
    else if (x<y)
    {
        printf("x is smaller than y");
    }
    else
    {
        printf("x and y are equal");
    }
}