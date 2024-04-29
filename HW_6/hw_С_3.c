


#include <stdio.h>

int middle(int a, int b)
{
	float c;
          c =(a + b)/2;
    return c;
}    

int main(void)

{
float x, y;
    scanf ("%f %f", &x, &y);
    printf ("%d" , middle (x, y));
   
    return 0;
}


