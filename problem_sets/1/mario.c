#include <stdio.h>

int main(void)
{

    // user input for number of bricks
    int space;
    do
    {
        printf("How much height do you want for the bricks? ");
        scanf("%d", &space);

    }
    while (space < 1 || space > 8);

    // printf("This is the height you wanted: %d\n", space);


    // first block of bricks
    for (int i = 0; i < space; i++)
    {
        int spaces = space - i;
        for (int k = spaces - 2; k > -1; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }


        //  space between two blocks
        printf("  ");




        // 2nd block of bricks
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}