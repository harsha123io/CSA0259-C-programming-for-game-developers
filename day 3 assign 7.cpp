#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int sum = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        sum += (int) str[i];
    }

    printf("The sum of ASCII values of all characters in the string is %d.\n", sum);

    return 0;
}
b 
