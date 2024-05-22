

#include <stdio.h>

void printNumb(int n) 
{ 
    if (n > 1)
        printNumb(n - 1);
    printf("%d ", n);
 }       

int main() 
{
     int n;
     scanf("%d", &n);
     printNumb(n);
    
    return 0;
}

