#include <stdio.h>

int main()
{
    int var1[5];
    float var2[5];
    char var3[5];
    int i, j, k;

    // 1. Integer Array using 'for' loop
    for (i = 0; i < 5; i++)
    {
        printf("Enter your integer value: ");
        scanf("%d", &var1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("At index %d: value = %d, address = %p\n", i, var1[i], (void *)&var1[i]);
    }

    printf("\n\n");

    // 2. Float Array using 'while' loop
    j = 0;
    while (j < 5)
    {
        printf("Enter your float/decimal value: ");
        scanf("%f", &var2[j]);
        j++;
    }

    j = 0;
    while (j < 5)
    {
        printf("At index %d: value = %f, address = %p\n", j, var2[j], (void *)&var2[j]);
        j++;
    }

    printf("\n\n");

    // 3. Character Array using 'do-while' loop
    k = 0;
    do
    {
        printf("Enter your character value: ");
        scanf(" %c", &var3[k]); // Space before %c handles newline characters in the input buffer
        k++;
    } while (k < 5);

    k = 0;
    do
    {
        printf("At index %d: value = %c, address = %p\n", k, var3[k], (void *)&var3[k]);
        k++;
    } while (k < 5);

    return 0;
}