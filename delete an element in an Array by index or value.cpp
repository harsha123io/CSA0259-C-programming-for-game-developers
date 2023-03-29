#include <stdio.h>

int main() {
   int arr[100], n, i, j, val, index;
   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: \n");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   printf("Enter the value or index of the element you want to delete: ");
   if (scanf("%d", &val) == 1) {
      // Deleting by value
      for (i = 0; i < n; i++) {
         if (arr[i] == val) {
            for (j = i; j < n - 1; j++) {
               arr[j] = arr[j + 1];
            }
            n--;
            break;
         }
      }
   } else {
      // Deleting by index
      scanf("%d", &index);
      for (i = index; i < n - 1; i++) {
         arr[i] = arr[i + 1];
      }
      n--;
   }

   printf("The array after deleting the element: ");
   for (i = 0; i < n; i++) {
      printf("%d ", arr[i]);
   }

   return 0;
}

