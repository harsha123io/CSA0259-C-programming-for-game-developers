#include <stdio.h>

int main()
{
   int arr[10] = { Given elements};
   int n = 10, i, j, k;

   printf("Original Array: ");
   for (i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   for (i = 0; i < n; i++)
   {
      for (j = i+1; j < n; j++)
      {
         if (arr[j] == arr[i])
         {
            for (k = j; k < n; k++)
            {
               arr[k] = arr[k+1];
            }
            n--;
            j--;
         }
      }
   }

   printf("\nArray after removing duplicates: ");
   for (i = 0; i < n; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}
