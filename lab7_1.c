#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
int rows, cols;
printf("Rows pls:");
scanf_s("%d", &rows);
printf("columns pls:");
scanf_s("%d", &cols);
int arrayl;
arrayl = (int*)malloc(rows * cols * sizeof(int));

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        printf("arrayl (%d)(%d) = ", i, j);
        scanf("%d", &arrayl[i*cols+j]);
    }
}

for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        printf("%5d ",arrayl[i*cols+j]);
    }
    printf("\n");
}
}
