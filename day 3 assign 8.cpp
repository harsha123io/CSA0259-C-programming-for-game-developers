#include <stdio.h>
#include <string.h>

/* Function to swap two characters */
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

/* Function to print all permutations of a string */
void permute(char *str, int l, int r)
{
    if (l == r) {
        printf("%s\n", str);
    } else {
        for (int i = l; i <= r; i++) {
            swap((str + l), (str + i));
            permute(str, l+1, r);
            swap((str + l), (str + i)); // backtrack
        }
    }
}

/* Main function */
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("All permutations of the given string: \n");
    int n = strlen(str);
    permute(str, 0, n-1);

    return 0;
}

