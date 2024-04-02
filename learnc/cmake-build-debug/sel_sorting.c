//
// Created by Kshitij Vashisth on 25-08-2023.
//
#include <stdio.h>

int main(void)
{
    int array_size = 10;
    int a[10] = {5, 0, 3, 4, 2, 1, 6, 9, 7, 8};
    int temp_var = 0;
    int temp_ind = 0;
    for (int i = 0; i < array_size; i++)
    {
        printf("Please enter number %d:", i+1);
        scanf("%d", &a[i]);
//        printf("%lld\n", a[i]);
    }
    printf("This is sorting output:\n");
    for (int i = 0; i < array_size; i++)
    {
        for (int j = i+1; j < array_size; j++)
        {
            if (a[i] < a[j])
            {
                temp_var = a[j];
                temp_ind = j;
                a[j] = a[i];
                a[i] = temp_var;

            }
            else if (a[i] > a[j])
            {
                temp_var = a[i];
                temp_ind = i;
//                a[i] = a[j];
//                a[j] = temp_var;
            }

        }


    }
    for (int i = 0; i < array_size; i++)
    {
        printf("%d\n", a[i]);
    }
}