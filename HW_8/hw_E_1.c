

#include <stdio.h>

#define SIZE 5

int main()
{
    int arr[SIZE], i;
    float  sum=0;

    for (i = 0; i < SIZE; ++i) 
        scanf("%d", &arr[i]);
       
    for (i = 0; i < SIZE; ++i) 
        sum += arr[i];
           
    float mid = sum/SIZE;
    printf("%.3f ", mid); 
      
    return 0;
}


