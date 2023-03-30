#include <stdio.h>

int main() {
   int arr[50], size, i, j, temp;

   printf("Enter the size of array: ");
   scanf("%d", &size);

   printf("Enter the array elements:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }

   
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size; j++) {
         if (arr[i] < arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
      if (i == 1) {
         printf("Second largest element: %d\n", arr[i]);
         break;
      }
   }

   // Find the second smallest element
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size; j++) {
         if (arr[i] > arr[j]) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
         }
      }
      if (i == 1) {
         printf("Second smallest element: %d\n", arr[i]);
         break;
      }
   }

   return 0;
}
