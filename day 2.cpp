#include <stdio.h>

int main() {
    int arr[100], n, largest1, largest2, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    //initialize largest1 and largest2 to the first two elements of the array
    if(arr[0] > arr[1]) {
        largest1 = arr[0];
        largest2 = arr[1];
    } else {
        largest1 = arr[1];
        largest2 = arr[0];
    }

    //find the largest two numbers in the array
    for(i = 2; i < n; i++) {
        if(arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if(arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }

    printf("The largest two numbers in the array are %d and %d", largest1, largest2);

    return 0;
}

