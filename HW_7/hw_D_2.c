

#include <stdio.h>

int sumNumb(int n) 
{
    if (n == 1) 
    { 
        return 1;
    } 
    else 
    {
        return n + sumNumb(n - 1);
    }
}
int main() 
{
    int n;
    scanf("%d", &n);
    printf("%d ",sumNumb(n));
    return 0;
}
