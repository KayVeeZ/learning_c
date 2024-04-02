#include <stdio.h>

int get_size(void);
int get_end_size(int size);
int get_years(int n, int end_size);

int main(void)
{
    // Prompt for start size
    int n = get_size();

    // TODO: Prompt for end size
    int end_size = get_end_size(n);

    // TODO: Calculate number of years until we reach threshold
    int i = get_years(n, end_size);

    // TODO: Print number of years
    printf("Years: %i\n", i);
}













int get_size(void)
{
    int n;
    do
    {
        printf("What is the starting size of the population? ");
        scanf("%d", &n);
    }
    while (n < 9);
    return n;

}

int get_end_size(int size)
{
    int ea;
    do
    {
        printf("What is the end size of the population? ");
        scanf("%d", &ea);
    }
    while (ea < size);
    return ea;
}

int get_years(int n, int end_size)
{
    int i = 0;
    if (n == end_size)
    {
        i = 0;
        return i;
    }
    else
    {
        do
        {
            n = n + (n / 3) - (n / 4);
            i++;
        }
        while (n < end_size);
        return i;
    }
}