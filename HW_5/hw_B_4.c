


#include <stdio.h>

int main (void)
{
  int a, count = 0;
  scanf ("%d", &a);
  while (a != 0)
  {
	  count++;
	  a = a/10;
  }
  if (count == 3)
  {
	  printf ("YES");
  }
  else
  {
	 printf ("NO") ;
  }
    
  return 0;
}

