#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double a, b, c;
	printf("Введите стороны треугольника\n");
	scanf_s("%lf%lf%lf", &a, &b, &c);
	if(a==b && a==c)
	{
		printf("Треугольник равносторонний");
	}
	else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {

		printf("Треугольник прямоугольный");
	}
	else
	{
		printf("Треугольник простой");
	}
	return 0;

}
