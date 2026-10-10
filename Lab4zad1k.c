#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>

void parts(double x)
{
    int whole;
    double fractional;
    whole = (int)x;
    fractional = x - whole;
    printf("Целая часть = %d\n", whole);
    printf("Дробная часть = %f\n", fractional);
}

void symbolCode(char c)
{
    printf("Десятичный код = %d\n", (unsigned char)c);
    printf("Шестнадцатеричный код = %X\n", (unsigned char)c);
}

double divide(int i)
{
    return 1.0 / i;
}

int main()
{
   setlocale(LC_CTYPE,"RUS");

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Символ c = %c\n", c);
    printf("Целое число i = %d\n", i);
    printf("Число float f = %.2f\n", f);
    printf("Число double d = %e\n", d);

    printf("\nВведите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите число float: ");
    scanf("%f", &f);

    printf("Введите число double: ");
    scanf("%lf", &d);

    printf("\nВведенные значения:\n");
    printf("Символ c = %c\n", c);
    printf("Целое число i = %d\n", i);
    printf("Число float f = %.2f\n", f);
    printf("Число double d = %e\n", d);

    printf("\nЗАДАЧА 1а\n");
    parts(d);

    printf("\nЗАДАЧА 1б\n");
    symbolCode(c);

    printf("\nЗАДАЧА 1в\n");

    if (i != 0)
    {
        double result;
        result = divide(i);
        printf("Результат 1/i = %f\n", result);
    }
    else
    {
        printf("Ошибка: число i не должно быть равно нулю\n");
    }

    return 0;
}