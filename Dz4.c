#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int is_alarm_on(int a, int b)
{
	if ((a % 2) != (b % 2))
	{
		return 1;
	}
	else {
		return 0;
	}
}
 
int main()

{
	setlocale(LC_CTYPE,"RUS");
	int A, B;
	printf("Ввведите значения датчиков A и B");
	scanf("%d %d", &A, &B);
	int condition = is_alarm_on(A, B);
	
	printf("Система тревоги\n");
	if (condition == 1)
	{
		printf("Сирена включена\n");
	}
	else {
		printf("Сирена выключена\n");
	}
	return 0;

}