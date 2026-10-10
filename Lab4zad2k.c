#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
   setlocale(LC_CTYPE,"RUS");
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
    //1
    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("z = %lf\n", z);

    //2
    printf("\nЯвное преобразование:\n");
    printf("float: %f\n", (float)a / b);
    printf("double: %lf\n", (double)a / b);


    printf("(float)(a / b) = %f\n", (float)(a / b));
    printf("(float)a / b = %f\n", (float)a / b);

    return 0;
}