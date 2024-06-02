

#include <stdio.h>

#define SIZE 12

void invert(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
   int arr[SIZE];
   int i;
   for(i = 0; i < SIZE; i++)
       scanf("%d", &arr[i]);
   invert(arr, 0, 3);
   invert(arr, 4, 7);
   invert(arr, 8, 11);
   
  printf("\n");
  for(int i = 0; i < SIZE; i++)
  printf("%d ", arr[i]);
  
return 0;
}
