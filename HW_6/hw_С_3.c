


#include <stdio.h>

float middle(int a, int b)
{
	float c;
          c =(a + b)/2.;
    return c;
}    

int main(void)

{
float x, y;
    scanf ("%f %f", &x, &y);
    printf ("%.1f", middle (x, y));
   
    return 0;
}


