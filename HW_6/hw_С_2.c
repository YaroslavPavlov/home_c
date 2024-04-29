

#include <stdio.h>

int power(int n, int p)
 {
	 int res = 1;
	 int i = 1;
	 while (i <= p)
	 {   
	     res *= n;
		 i++;
	 }	 
     return res;
 }
	 
 int main()
{
 int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", power(x, y));
    return 0;
}

