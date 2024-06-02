

#include <stdio.h>

#define SIZE 10

int Input(int n, int arr[]) 
{
int i;
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    return i;
}

void Revers (int i, int j, int arr[])
{
     for (i = 0; i < SIZE/2; i++) 
     {
         j = (SIZE-1) - i;
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }

     for (i = SIZE/2; i < SIZE; i++)
     {
         j = i - SIZE/2;
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
     }

     for (i = 0; i < SIZE; i++)
         printf("%d ", arr[i]);
 }

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    int i=SIZE/2;
    int j=SIZE;
    Revers (i, j, arr);
    return 0;
}


