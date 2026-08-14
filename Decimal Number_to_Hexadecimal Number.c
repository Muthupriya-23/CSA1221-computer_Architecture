#include <stdio.h>
int main()
{
    int decimal, remainder;
    char hexadecimal[20];
    int i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0)
    {
        printf("Hexadecimal number = 0");
    }
    else
    {
        while (decimal > 0)
        {
            remainder = decimal % 16;
            if (remainder < 10)
                hexadecimal[i] = remainder + '0';
            else
                hexadecimal[i] = remainder - 10 + 'A';
            decimal = decimal / 16;
            i++;
        }
        printf("Hexadecimal number = ");
        while (i > 0)
        {
            i--;
            printf("%c", hexadecimal[i]);
        }
    }
    printf("\n");
    return 0;
}
