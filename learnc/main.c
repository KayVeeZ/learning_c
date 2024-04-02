#include <string.h>
#include <stdio.h>
#include <math.h>

int luhn_check(long long num1);
void comp_checker(long long num1);
int main(void)
{


    int checker_1 = 0;
    long long num1;

    do
    {
        printf("Enter the credit card number: ");
        scanf("%lld", &num1);
    }
    while (num1 < 0);



    // luhn's algorithm
    int checker = 0;
    checker = luhn_check(num1);

    if (checker == 1)
    {
        // company check
        comp_checker(num1);
    }
    else
    {
        printf("INVALID here3\n");
    }









}


















int luhn_check(long long num1)
{
    char b[100];
    int len_b, len_c;
    int d[100];
    char int_str[20];
    int sum1 = 0;
    int sum2 = 0;
    double exp1;
    int ab;
    long long num2 = 0;
    long long divider = 0;

    sprintf(b, "%lld", num1);
    num2 = num1;
    len_b = strlen(b);


    for (int i = 1; i < len_b; i += 2)
    {
        double result = pow(10, i);
        // printf("%.2lf\n", result);

        divider = (long)(long) result;

        // printf("%lld\n", divider);
        long long rem = num2 / divider;
        d[i] = (rem % 10) * 2;
        char c[40];
        sprintf(c, "%d", d[i]);
        // printf("this is d_i %d\n",d[i]);
        len_c = strlen(c);

        int div = 10;
        int arr[40];
        int rem1 = 0;
        int ste2 = d[i];

        do
        {
            rem1 = ste2 % div;
            sum1 += rem1;
            ste2 /= div;
            printf("this is sum1 %d\n", sum1);
        }
        while(ste2 > 0);



//        for (int j = 0; j < len_c; j++)
//        {
//
//            sum1 += (c[j] - '0');
//            printf("this is sum1 %d\n", sum1);
//        }
        // printf("%lld\n", num2);
    }

// for sum2
    for (int k = 0; k < len_b; k += 2)
    {
        double result1 = pow(10, k);
        // printf("%.2lf\n", result);

        long long divider1 = (long) (long) result1;

        // printf("%lld\n", divider);
        long long rem1 = (num2 / divider1);
        d[k] = (rem1 % 10);
        // printf("this is d_k %d\n",d[k]);
        sum2 += d[k];
        printf("this is sum2 %d\n", sum2);
    }


    // final step of algorithm
    int sum3 = sum1 + sum2;
    printf("This is sum3 %d\n", sum3);
    char e[40];
    sprintf(e, "%d", sum3);
    int len_e = strlen(e);
    int check_a;

    int l = 0;
    do
    {
        check_a = e[l] - '0';
        printf("check_a is %d\n", check_a);
        l++;
    }
    while (l < len_e);
    // printf("check a is %d\n", check_a[l]);
    int checker = 0;
    if (check_a == 0)
    {
        // printf("Valid Credit Card\n");
        checker = 1;
    }
    else
    {
        printf("Invalid here 1\n");
    }
    return checker;
}








void comp_checker(long long num1)
{
    char string_card[100];
    sprintf(string_card, "%lld", num1);
    int len_strc = strlen(string_card);
    char comp_name[40];
    int chk_0 = string_card[0] - '0';
    int chk_1 = string_card[1] - '0';
    int checker_1 = 0;
    if (chk_0 == 3 && (chk_1 == 4 || chk_1 == 7) && len_strc == 15)
    {
        checker_1 = 1;
        strcpy(comp_name, "AMEX\n");
    }
    else if (chk_0 == 5 && (chk_1 == 1 || chk_1 == 2 || chk_1 == 3 || chk_1 == 4 || chk_1 == 5) && len_strc == 16)
    {
        checker_1 = 1;
        strcpy(comp_name, "MASTERCARD\n");
    }
    else if (chk_0 == 4 && (len_strc == 13 || len_strc == 16))
    {
        checker_1 = 1;
        strcpy(comp_name, "VISA\n");
    }
    else
    {
        strcpy(comp_name, "INVALID\n");
    }
    printf("%s", comp_name);
}





