#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void zd1();
void zd2();
void zd3();

void parts(double x) 
{ 
    int whole = (int)x;
    double fractional = x - whole;
    printf("Целая часть = %d\n", whole);
    printf("Дробная часть =%f\n", fractional);

    }
void symbolCode(char c)
{
    printf("Десятичный код = %d\n", c);
    printf("Шестнадцатеричный код = %x\n", c);
    }
        double divide(int i) 
    { 
        return 1.0 / i;
    }

int main()

{
	setlocale(LC_CTYPE, "RUS");

	zd1();
	zd2();
	zd3();
	return 0;
}

void zd1()
{

    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Задание 1\n");

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
        printf("Результат 1/%d = %f\n", i, divide(i));
    }
    else
    {
        printf("Ошибка: число i не должно быть равно нулю\n");
    }
}


        void zd2()
        { 
        printf("Задание 2\n");

        int a = 11;
        int b = 3;

        int x;
        float y;
        double z;
        x = a / b;
        y = a / b;
        z = a / b;

        printf("a = %d\n", a);
        printf("b = %d\n", b);
        printf("Неявное преобразование\n");
        printf("x = %d\n", x);
        printf("y = %f\n", y);
        printf("z = %lf\n", z);

        printf("\nЯвное преобразование:\n");
        printf("float: %f\n", (float)a / b);
        printf("double: %lf\n", (double)a / b);

        printf("Эксперимент со скобками\n");
        printf("(float)(a / b) = %f\n", (float)(a / b));
        printf("(float)a / b = %f\n", (float)a / b);

        }


        void zd3()
        {
            printf("Задание 3\n");
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

        printf("Последняя цифра = %d, первая цифра = %d, сумма цифр = %d, число наоборот = %d",last, first, sum, reverse);

        }