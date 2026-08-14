#include <stdio.h>
#include <math.h>
int main() {
    int choice, decimal, binary, remainder, i = 0;
    int binaryNum[32];
    int decimalNum = 0, base = 1;
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter a decimal number:\n ");
            scanf("%d", &decimal);
            if (decimal == 0) {
                printf("Binary = 0\n");
                break;
            }
            while (decimal > 0) {
                binaryNum[i] = decimal % 2;
                decimal = decimal / 2;
                i++;
            }
            printf("Binary = ");
            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binaryNum[j]);
            }
            printf("\n");
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%d", &binary);
            while (binary > 0) {
                remainder = binary % 10;
                decimalNum += remainder * base;
                base *= 2;
                binary /= 10;
            }
            printf("Decimal = %d\n", decimalNum);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
