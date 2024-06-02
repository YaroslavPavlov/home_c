

#include <stdio.h>

#define SIZE 12

int Input(int n, int arr[]) 
{
	int i;
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    return i;
}

int ArMid(int arr[], int n)
{
float sum = 0.0;
   for (int i = 0; i < n; ++i) 
	    sum += arr[i];
   float mid = sum/n;
   printf("%.2f ", mid);
   return mid;
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    ArMid(arr, SIZE);
    return 0;
}

