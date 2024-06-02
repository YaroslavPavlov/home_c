

#include <stdio.h>

#define SIZE 5

int Input(int n, int arr[]) 
{
	int i;
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    return i;
}

int Min(int len, int arr[])
{
   int min = arr[0];
   for (int i = 1; i < len; ++i) 
       {
		   if (arr[i]< min)
		   min = arr[i];
       }
   printf("%d ", min);
   return min;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    Min(SIZE, arr);
    return 0;
}

