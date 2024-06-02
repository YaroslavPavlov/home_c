


#include <stdio.h>

#define SIZE 10

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
	   if (arr[i] < min)
		   min = arr[i];
   }
   printf("%d ", min);
   return min;
}

int PosMin(int len, int arr[])
{
   int min = arr[0], pos = 0;
   for (int i = 1; i < len; ++i) 
   {
	   if (arr[i] < min)
	   {
		   min = arr[i];
		   pos = i;
	   }
   }
   printf("%d ", pos+1);
   return pos;
}

int Max(int len, int arr[])
{
   int max = arr[0];
   for (int i = 1; i < len; ++i) 
   {
	   if (arr[i] > max)
		   max = arr[i];
   }
   printf("%d ", max);
   return max;
}

int PosMax(int len, int arr[])
{
   int max = arr[0], pos = 0;
   for (int i = 1; i < len; ++i) 
   {
	   if (arr[i] > max)
	   {
		   max = arr[i];
		   pos = i;
	   }
   }
   printf("%d ", pos+1);
   return pos;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    PosMax(SIZE, arr);
    Max(SIZE, arr);
    PosMin(SIZE, arr);
    Min(SIZE, arr);
    return 0;
}

