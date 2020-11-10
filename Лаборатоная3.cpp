#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
int main() {

	setlocale(LC_ALL, "rus");
	int* a;
	int i, n, chp, chn, sp, sn, ch0;

	printf("Введите размер массива: ");
	scanf_s("%d", &n);

	a = (int*)malloc(n * sizeof(int));
	printf("Введите элементы массива:\n ");
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
	chp = 0; chn = 0; sp = 0; sn = 0; ch0 = 0;

	for (i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			sp = sp + a[i]; chp++;
		}
		else if (a[i] < 0)
		{
			sn = sn + a[i]; chn++;
		}
		else
		{
			ch0++;
		}
	}
	printf("Количество положительных: %d\n", chp);
	printf("Количество отрицательных: %d\n", chn);
	printf("Количество равных нулю: %d\n", ch0);
	printf("Сумма положительных: %d\n", sp);
	printf("Сумма отрицательных %d", sn);
	return 0;
}





