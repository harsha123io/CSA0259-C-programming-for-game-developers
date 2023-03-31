#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

int main() {
    char str[100];
    int count[ASCII_SIZE] = {0}, max_count = 0;
    char max_char;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        int ascii_val = (int) str[i];
        count[ascii_val]++;
    }

    // Find character with highest frequency
    for (int i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_char = (char) i;
        }
    }

    printf("The character with highest frequency is '%c' with frequency %d.\n", max_char, max_count);

    return 0;
}

