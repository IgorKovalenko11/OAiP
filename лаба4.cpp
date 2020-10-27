#include <stdio.h>
#include <iostream>
#include <stdlib.h> 


int main() {

	setlocale(LC_ALL, "Rus");                   
	int *mas, n, vozr = 0, temp = 0;
	printf("Введите количество элементов: ");
	scanf_s("%d", &n);
	mas = (int*)malloc(n * sizeof(int));                                                                                                           
	for (int i = 0; i < n; i++) {
		printf("mas[%d]= ", i);                                                                   
		scanf_s("%d", &mas[i]);                                                               
	}
	for (int i = 0; i < n; i++)
	{
		temp = i;
		for (; (mas[i] < mas[i + 1]);)                                                             
		{
			i++;
		}
		if (temp != i) vozr++;
	}
	printf("Количество промежутков возрастания равно %d", vozr);
	free(mas);
	return 0;
}
