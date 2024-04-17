


#include <stdio.h>

int main( void )
{
    int num;
    int mult = 1;
    scanf("%d", &num);

    while(num > 0){
        int tmp = num % 10;
        mult *= tmp;
        num /= 10;
    }

    printf("%d\n", mult);
    return 0;
}

