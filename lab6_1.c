#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void massive(int n, int a[])
{
    int i;
    for (i = 1; i <= n; i++)
        a[i] = rand() % 101 - 50;
}

float srznach(int n, int a[])
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
        sum += a[i];
    return sum / n;
}

int main()
{
    srand(time(NULL));
    int n;
    float b, otklonenie;
    printf("Введите количество элементов в массиве  n ->");
    scanf("%d", &n);
    printf("Введите величину отклонения otklonenie ->");
    scanf("%f", &otklonenie);
    int A[n];
    int i;

    massive(n ,A);
    for (i = 1; i <= n; i++)
        printf("%4d \t", A[i]);
    printf("\n");

    b = srznach(n, A);
    printf("%f \n", b);

    for (i = 1; i <= n; i++)
    {
        if ((A[i] <= b + otklonenie) && (A[i] >= b - otklonenie))
            A[i] = A[i];
        else if (((A[i] <= b + otklonenie) || (A[i] >= b - otklonenie)) && (i % 2 == 0))
            A[i] = A[i] + otklonenie;
        else if (((A[i] <= b + otklonenie) || (A[i] >= b - otklonenie)) && (i % 2 != 0))
            A[i] = A[i] - otklonenie;
        printf("%4d \t", A[i]);
    }
    return 0;
}
