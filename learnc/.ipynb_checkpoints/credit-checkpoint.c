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
//    printf("");

    if (checker == 1)
    {
        // company check
        comp_checker(num1);
    }
    else
    {
        printf("INVALID\n");
    }









}


















int luhn_check(long long num1)
{
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int checker = 0;
    long long num2 = num1 / 10;
    do
    {
        int rem = num2 % 10;
        int dig = rem *2;
        num2 /= 100;
        do
        {
            int rem1 = dig % 10;
            sum1 += rem1;
            dig /= 10;
        }
        while (dig > 0);
//        return sum1;


    }
    while (num2 > 0);
//    return sum1;


// for sum2
     do
    {
        int rem2 = num1 % 10;
        sum2 += rem2;
        num1 /= 100;
     }
     while(num1 > 0);
//     return sum2;







    // final step of algorithm
    sum3 = sum1 + sum2;
//    printf("%d %d %d\n", sum3, sum2, sum1);
    int check_a = sum3 % 10;
    if (check_a == 0)
    {
        // printf("Valid Credit Card\n");
        checker = 1;
    }
    else
    {
        checker = 0;
//        printf("checker is %d", check_a);
    }
    return checker;
//    printf("checker is %d", checker);
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
        printf("AMEX\n");
    }
    else if (chk_0 == 5 && (chk_1 == 1 || chk_1 == 2 || chk_1 == 3 || chk_1 == 4 || chk_1 == 5) && len_strc == 16)
    {
        checker_1 = 2;
        printf("MASTERCARD\n");
    }
    else if (chk_0 == 4 && (len_strc == 13 || len_strc == 16))
    {
        checker_1 = 3;
        printf(comp_name, "VISA\n");
    }
    else
    {
        strcpy(comp_name, "INVALID2\n");
        checker_1 = 0;
    }

}



