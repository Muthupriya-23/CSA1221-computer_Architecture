#include <stdio.h>
int main()
{
    int decimal, binary[32], i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0)
    {
        printf("Binary number = 0");
    }
    else
    {
        while (decimal > 0)
        {
            binary[i] = decimal % 2;
            decimal = decimal / 2;
            i++;
        }
        printf("Binary number = ");
        while (i > 0)
        {
            i--;
            printf("%d", binary[i]);
        }
    }
    printf("\n");
    return 0;
}
