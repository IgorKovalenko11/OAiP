#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int** a = NULL;
    int i, j, n, m, k, k1, tmp;

    printf("Введите количество строк: ");
    scanf_s("%d", &n);
    printf("Введите количество столбцов: ");
    scanf_s("%d", &m);
    a = (int**)malloc(n * sizeof(int*));
    for (i = 0; i < n; i++)
    {
        *(a + i) = (int*)malloc(m * sizeof(int));
    }
    printf("Введите элементы массива:\n ");
    for (i = 0; i < n; i++, putchar('\n'))
    {
        for (j = 0; j < m; j++)
        {
            *(*(a + i) + j) = rand() % 20 - 10;
            printf("%5d ", *(*(a + i) + j));
        }
    }
    printf("Поменять строки: ");
    scanf_s("%d", &k);
    scanf_s("%d", &k1);
    for (j = 0; j < m; j++) {
        tmp = *(*(a + k - 1) + j);
        *(*(a + k - 1) + j) = *(*(a + k1 - 1) + j);
        *(*(a + k1 - 1) + j) = tmp;
    }
    for (i = 0; i < n; i++, putchar('\n'))
    {
        for (j = 0; j < m; j++)
        {
            printf("%5d ", *(*(a + i) + j));
        }
    }
    return 0;
}
