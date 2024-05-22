


#include <stdio.h>

void printDigits(int n)
{
    if (n > 0)
   {
       printf("%d ", n % 10);
       printDigits(n / 10);
   }
}

int main() 
{
   int n;
       scanf("%d", &n);
       if (n > 0)
	      printDigits(n);
	      else printf("%d ", n / 10);
   return 0;
}

