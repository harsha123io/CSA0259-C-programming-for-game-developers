#include <stdio.h>

int main() {
    int arr[100], n, largest1, largest2, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    largest1 = arr[0];  // initialize the largest1 variable to the first element of the array
    largest2 = arr[1];  // initialize the largest2 variable to the second element of the array
    
    if (largest2 > largest1) {  
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    
    for (i = 2; i < n; i++) {
        if (arr[i] > largest1) {  // update the largest1 and largest2 variables if a larger element is found
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }
    
    printf("The largest two elements in the array are %d and %d", largest1, largest2);
    
    return 0;
}

