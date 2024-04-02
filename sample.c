#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a = 1682;
    char b[20]; // Assuming a maximum of 20 digits

    sprintf(b, "%d", a); // Convert integer to string

    int num_dig = strlen(b); // Calculate the length of the string

    int d[20]; // Assuming a maximum of 20 digits

    for (int ind = 0; ind < num_dig; ind++) {
        d[ind] = (b[ind] - '0') * 2; // Convert character digit to integer and multiply by 2
    }

    for (int j = 0; j < num_dig; j++) {
        printf("%d\n", d[j]); // Print each value in d on a new line
    }

    return 0;
}






