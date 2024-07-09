#include <stdio.h>
#define STRLEN 101
int main(void)
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt","w");

    char word_1[STRLEN] = {'\0'};
    char word_2[STRLEN] = {'\0'};
    int index_1_max = 0,index_2_max = 0,count = 0;

    fscanf(input,"%s%s",word_1, word_2);
    fclose(input);

    for(int i = 0; i < STRLEN && word_1[i]!= '\0'; index_1_max = 1 + i++);
    for(int i = 0; i < STRLEN && word_2[i]!= '\0'; index_2_max = 1 + i++);

    for(int index_1 = 0; index_1 < index_1_max; index_1++)
    {
        count=0;
        for (int index_12 = 0; index_12 < index_1_max && count < 3; index_12++)
        {
            if(word_1[index_1] == word_1[index_12])
            {
                count++;
            }
        }

        if(count == 2)  
        {
            count = 3; 
        }
        
        for (int index_2 = 0; index_2 < index_2_max && count < 3; index_2++)
        {
            if(word_1[index_1] == word_2[index_2])
            {
                count++;
            }
        }

        if(count == 2)
        {
            fprintf(output,"%c ",word_1[index_1]);
        }
    }

    fclose(output);
    return 0;
}

