

#include <stdio.h>

#define SIZE 10

int main()
{
int arr[SIZE];
   for(int i = 0; i < SIZE; i++) 
      scanf("%d", &arr[i]);
int last = arr[SIZE-1];
int i;
   for(i = (SIZE-1); i > 0; i--) 
      arr[i] = arr[i - 1];  
   arr[0] = last;
   printf("\n");
   for(int i = 0; i < SIZE; i++) 
      printf("%d ", arr[i]);
       
    return 0;
}

