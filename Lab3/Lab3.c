#include <stdio.h>
#include<locale.h>
#define D 2.54
#define P 2,32166 
int main()
{
	zadanie1();
	zadanie2();
	zadanie3();
	return 0;
}
int zadanie1()
{
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	int A, C;
	puts("Задание 1");
	puts("введите число");
	scanf("%d %d", &A, &C);
	printf("Введено число А: %d\n", A);
	printf("Введено число С: %d\n", C);
	printf("Сумма чисел равна: %d\n", A + C);
	printf("Разность чисел равна: %d\n", A - C);
	printf("Произведение чисел равно; %d\n ", A * C);
	printf("Частное чисел равно: %.1f\n", (float)A / C);
	printf("Остаток от деления второго числа на первое равно: %d\n", C % A);
	return 0;
}
int zadanie2()
{
	int dym;
	float result1, result2;
	puts("Задание 2");
	puts("Введите значение для расчета:");
	scanf("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	printf("%d дюймов - это %.2f см\n", dym, result1);
	printf("%d испанских дюймов - это %.2f см\n", dym, result2);
	return 0;
}
int zadanie3()
{
	float a, b;
	puts("Введите два числа:");
	scanf("%f",&a);
	scanf("%f",&b);
	puts("Задание 3");
	printf("-------------------------------------------------\n");
	printf("| %8s	| %8s	| %8s	|\n", "a*b", "a+b", "a-b");
	printf("-------------------------------------------------\n");
	printf("| %6.0f*%-6.0f | %6.0f+%-6.0f | %6.0f-%-6.0f |\n",a, b, a, b, a, b);
	printf("-------------------------------------------------\n");
	printf("| %9.0f     | %9.0f     | %9.0f     |\n",a * b, a + b, a - b);
	printf("-------------------------------------------------\n");
	return 0;
}
