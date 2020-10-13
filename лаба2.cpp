#include<stdio.h>
#include<iostream>
#include<math.h>


int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	printf("Введите стороны треугольника\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("Такой треугольник не существует!\n");

		return 1;
	}
	if (a == b && a == c)
	{
		printf("Треугольник равносторонний");
	}
	else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
	{
		printf("Треугольник прямоугольный");
	}
	else
	{
		printf("Треугольник простой");
	}


	return 0;

}

