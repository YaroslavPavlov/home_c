


#include <stdio.h>

int sum_of_numbers(int N)
{
    if (N == 0)
    {
        return 0;
    }
    int sum = 0;
    for (int i = 1; i <= N; ++i)
    {
        sum += i;
    }
    return sum;
}

int main() 
{
    int N;
      scanf("%d", &N);
      printf("%d\n", sum_of_numbers(N));
    
    return 0;
}

