#include <stdio.h>
int main()
{
    int decimal, octal[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0)
    {
        printf("Octal number = 0");
    }
    else
    {
        while (decimal > 0)
        {
            octal[i] = decimal % 8;
            decimal = decimal / 8;
            i++;
        }
        printf("Octal number = ");
        while (i > 0)
        {
            i--;
            printf("%d", octal[i]);
        }
    }
    printf("\n");
    return 0;
}
