

#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    if (num >= 0)
    {
        printf("%d\n", num);
    }
    		
	if (num < 0)
	{
		printf("%d\n", (-num));
	}
       
    return 0;
}
