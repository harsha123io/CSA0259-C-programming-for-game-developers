#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, remainder, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) {
        remainder = decimalNum % 2;
        binaryNum += remainder * place;
        decimalNum /= 2;
        place *= 10;
    }

    printf("The binary equivalent is: %d", binaryNum);

    return 0;
}
