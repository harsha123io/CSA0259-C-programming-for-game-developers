#include <stdio.h>

int isComposite(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    
    return 0;
}

int countComposites(int arr[], int size) {
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int arr[] = {1, 3, 4, 6, 7, 9, 11, 12};
    int size = sizeof(arr) / sizeof(int);
    
    int count = countComposites(arr, size);
    
    printf("Number of composite numbers in the array: %d\n", count);
    
    return 0;
}
