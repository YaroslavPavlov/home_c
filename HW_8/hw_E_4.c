

#include <stdio.h>

#define SIZE 10

int Input(int n, int arr[]) 
{
int i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    return i;
}
void Max(int len, int arr[])
{
int max_1 = arr[0];
int max_2 = - arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i] > max_1)
        {
            max_2 = max_1;
            max_1 = arr[i];    
        } 
        else if (arr[i] > max_2) 
                max_2 = arr[i];
    }
    printf ("%d", max_1 + max_2);
}

int main()
{
    int arr[SIZE];
    Input(SIZE, arr);
    Max(SIZE, arr);
    return 0;
}
