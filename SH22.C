#include <stdio.h>

#define ROWS 3
#define COLS 3

int main()
{
    int a[ROWS][COLS], b[ROWS][COLS], c[ROWS][COLS];
    int i, j;

    // Reading Matrix A
    printf("Enter elements of Matrix A (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading Matrix B
    printf("Enter elements of Matrix B (%dx%d):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Addition
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // Displaying the Resultant Matrix
    printf("\nResultant Matrix:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}