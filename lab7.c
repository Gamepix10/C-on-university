#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void massive(int n, int m, int a[][m])
{
    int i,j;
    for (i = 0; i < n; i++)
    {
            for (j = 0; j < m; j++)
            {
                a[i][j] = rand() % 101 - 50;
                printf("%4d \t", a[i][j]);
            }
            printf("\n");
    }
}

void changemassive(int n, int m, int a[][m])
{
    int i;
    for (i = 0; i < m; i++)
    {
            int buf = a[i][i];
            a[i][i] = a[i][m - 1 - i];
            a[i][m - 1 - i] = buf;
    }
}

void vivod(int n, int m, int a[][m])
{
    int i,j;
    for (i = 0; i < n; i++)
    {
            for (j = 0; j < m; j++)
                printf("%4d \t", a[i][j]);
            printf("\n");
    }
}

int main()
{
    srand(time(NULL));
    int n, m;
    printf("Введите количество строк  n ->");
    scanf("%d", &n);
    printf("Введите количество столбцов  m ->");
    scanf("%d", &m);
    int A[n][m];
    massive(n, m, A);
    printf("\n");
    changemassive(n, m, A);
    vivod(n, m, A);
    return 0;

}
