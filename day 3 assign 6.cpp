#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0}, flag = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of each character in first string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            count1[str1[i] - 'a']++;
        }
    }

    // Count frequency of each character in second string
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            count2[str2[i] - 'a']++;
        }
    }

    // Compare frequency of each character
    for (int i = 0; i < 26; i++) {
        if (count1[i] != count2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        printf("The strings are not anagrams.\n");
    }
    else {
        printf("The strings are anagrams.\n");
    }

    return 0;
}

