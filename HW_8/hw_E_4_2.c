
#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE]; 
    int max1, max2; 
    int i;
   
    for (i = 0; i < SIZE; i++) 
        scanf("%d", &arr[i]);
    
    max1 = arr[0];
    max2 = - arr[0];
    
    for (i = 1; i < SIZE; i++) 
    {
        if (arr[i] > max1) 
        {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2)
            max2 = arr[i];
    }

    printf("%d\n", max1 + max2);

    return 0;
}


