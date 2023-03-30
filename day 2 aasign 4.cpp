#include <stdio.h>

int main()
{
   int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int n = 10, max_diff = -1, i, j;

   for (i = 0; i < n; i++)
   {
      for (j = i+1; j < n; j++)
      {
         if (arr[j] - arr[i] > max_diff)
         {
            max_diff = arr[j] - arr[i];
         }
      }
   }

   printf("The maximum difference is %d", max_diff);

   return 0;
}
