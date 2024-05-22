

#include <stdio.h>

void printBin(int n) 
{
	if (n > 0)
       //return;
       printBin(n / 2);
       printf("%d", n % 2);    	
}
 
int main()
{
int n;
    scanf("%d", &n);
    printBin(n);
    return 0;
}

