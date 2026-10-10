#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    int n;
    int last;
    int first;
    int sum;
    int reverse;

    printf("Введите целое трехзначное число: ");
    scanf("%d", &n);

    last = n % 10;
    first = n / 100;
    sum = first + (n / 10) % 10 + last;
    reverse = last * 100 + (n / 10) % 10 * 10 + first;

    printf("Последняя цифра = %d, первая цифра = %d, сумма цифр = %d, число наоборот = %d\n",
        last, first, sum, reverse);

    return 0;
}