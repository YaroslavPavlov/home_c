

#include <stdio.h>

#define SIZE 10

int Input(int n, int arr[]) 
{
	int i;
    for(i = 0; i < SIZE; i++)
        scanf("%d", &arr[i]);
    return i;
}
void Sum(int n, int arr[])
{
int sum = 0;
    for(int i = 0; i < SIZE; i++)
    {
        if (arr[i] > 0)
           sum += arr[i];
    }
    printf ("%d", sum);
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    Sum(SIZE, arr);
    return 0;
}
