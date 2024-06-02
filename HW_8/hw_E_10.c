

#include <stdio.h>

#define SIZE 12

int main() {
int arr[SIZE];
int temp[SIZE-8];
   for (int i = 0; i < SIZE; i++)
      scanf("%d", &arr[i]);
   for (int i = 0; i < (SIZE-8); i++)
      temp[i] = arr[(SIZE-4) + i];
   for (int i = (SIZE-1); i >= (SIZE-8); i--) 
        arr[i] = arr[i - (SIZE-8)];
   for (int i = 0; i < (SIZE-8); i++)
        arr[i] = temp[i];
   printf(" \n");
   for (int i = 0; i < SIZE; i++) 
   printf("%d ", arr[i]);
  
return 0;
}
