#include <stdio.h>

int main()
{
    int amount, notes, denominations[8] = {500, 100, 50, 20, 10, 5, 2, 1};
    int count[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 8; i++) {
        notes = amount / denominations[i];
        count[i] = notes;
        amount -= notes * denominations[i];
    }

    printf("Minimum number of notes required:\n");

    for (i = 0; i < 8; i++) {
        if (count[i] > 0) {
            printf("%d notes of Rs. %d\n", count[i], denominations[i]);
        }
    }

    return 0;
}
