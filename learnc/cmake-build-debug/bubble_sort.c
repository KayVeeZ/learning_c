//
// Created by Kshitij Vashisth on 26-08-2023.
//
//
// Created by Kshitij Vashisth on 26-08-2023.
//
#include <stdio.h>

int main(void)
{

    int array_size = 0;
    printf("How many numbers?: ");
    scanf("%d", &array_size);
//    int a[10] = {5, 0, 3, 4, 2, 1, 6, 9, 7, 8};
    int a[array_size];
    int temp_var = 0;
//    int temp_ind = 0;
    int swap_counter = -1;
    for (int i = 0; i < array_size; i++)
    {
        printf("Please enter number %d: ", i+1);
        scanf("%d", &a[i]);
//        printf("%d\n", a[i]);
    }
    printf("This is sorting output:\n");
    do
    {
        swap_counter = 0;
        for (int i = 0; i < array_size-1; i++)
        {


            if (a[i] < a[i + 1])
            {
                temp_var = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp_var;
                swap_counter++;
            }
        }
    }
    while (swap_counter != 0);

    for (int i = 0; i < array_size; i++)
    {
        printf("%d\n", a[i]);
    }
}