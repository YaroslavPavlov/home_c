

#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void count_and_sort_digits(const char* num_str) 
{
int count[10] = {0};
    
     for (int i = 0; num_str[i] != '\0'; i++) 
     {
         if (num_str[i] >= '0' && num_str[i] <= '9') 
         {
            count[num_str[i] - '0']++;
         }
     }

     for (int i = 0; i < 10; i++) 
     {
         if (count[i] > 0) 
         {
            printf("%d %d\n", i, count[i]);
         }
     }
}

int main() 
{
char num_str[MAX_DIGITS + 1];
scanf("%1000s", num_str);  
count_and_sort_digits(num_str);
return 0;
}


