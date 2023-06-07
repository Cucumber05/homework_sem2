#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p, q, i, j, k, sum;
    FILE *f1, *f2, *f3;

    // Открыть файлы для чтения r/записи w
    f1 = fopen("matrix1.txt", "r");
    f2 = fopen("matrix2.txt", "r");
    f3 = fopen("sum.txt", "w");

    //размеры матриц из файлов
    fscanf(f1, "%d %d", &m, &n);
    fscanf(f2, "%d %d", &p, &q);

    //возможность умножения матриц
    if (n != p)
    {
        printf("Некорректные размеры матриц");
        return 0;
    }

    // Выделить память под матриц(динам)
    int **A = (int **)malloc(m * sizeof(int*));
    for (i = 0; i < m; i++)
        A[i] = (int *)malloc(n * sizeof(int));

    int **B = (int **)malloc(p * sizeof(int*));
    for (i = 0; i < p; i++)
        B[i] = (int *)malloc(q * sizeof(int));

    int **C = (int **)malloc(m * sizeof(int*));
    for (i = 0; i < m; i++)
        C[i] = (int *)malloc(q * sizeof(int));

    // Загрузить исходные матрицы из файлов
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            fscanf(f1, "%d", &A[i][j]);
        }
    }

    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            fscanf(f2, "%d", &B[i][j]);
        }
    }

    // Умножение матрицы
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    // Сохранение в файл
    fprintf(f3, "%d %d\n", m, q);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            fprintf(f3, "%d ", C[i][j]);
        }
        fprintf(f3, "\n");
    }

    // Освобождаем память
    for (i = 0; i < m; i++)
        free(A[i]);
    free(A);
    for (i = 0; i < p; i++)
        free(B[i]);
    free(B);
    for (i = 0; i < m; i++)
        free(C[i]);
    free(C);

    //закрываем файлы
    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}