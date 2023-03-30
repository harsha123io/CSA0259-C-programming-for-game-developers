#include <stdio.h>

int main() {
    int arr[] = { 5, 8, 3, 1, 9, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);  
    int max = arr[0];  
    int min = arr[0];  
    
    // iterate through the array to find the max and min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // display the max and min
    printf("The maximum value in the array is: %d\n", max);
    printf("The minimum value in the array is: %d", min);
    
    return 0;
}
