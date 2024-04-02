#include<stdio.h>

int get_size(void);
void print_grid(size);


int main(void)
{
    // get size of bricks
    int n = get_size();   
    
    //print grid of bricks
    print_grid(n); 
}



int get_size(void)
{
    do
    {
        printf("Size: ");
        scanf("%d", &n);
    } 
    while (n<1);
    return n;

}

void print_grid(size)
{
    for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                printf("#");
            }
            printf("\n");
        }
}

