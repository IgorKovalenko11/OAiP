#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int ** a, ** b, i, j, n, k = 0;

    do {
        printf("Задайте размер матрицы: ");

        scanf_s("%d", &n);

        if (n <= 0) {
            printf("Размер матрицы не  должен быть меньше нуля.\n");
            continue;
        }
    }
    while (n <= 0);  
    a = (int**)malloc(n * sizeof(int*));    

    b = (int**)malloc(n * sizeof(int*));

    for (i = 0; i < n; i++) {  
        a[i] = (int*)malloc(n * sizeof(int));   

        b[i] = (int*)malloc(n * sizeof(int));

        for (j = 0; j < n; j++) {
            a[i][j] = k;
            k++;
        }
    }
    printf("Исходная матрица:\n");

    for (i = 0; i < n; i++) {   
        for (j = 0; j < n; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {   
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
    printf("\nТранспонированная матрица:\n");

    for (i = 0; i < n; i++) {   
        for (j = 0; j < n; j++) {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < n; i++) {   
        free(a[i]);
        free(b[i]);
    }
    free(a);    free(b);    

    return 0;
}