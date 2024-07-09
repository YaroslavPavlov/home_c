#include <stdio.h>

int main(void)
{
    FILE *input = fopen("input.txt","r");
    FILE *output = fopen("output.txt","w");

    char str[27]= {'\0'};
    int num=0, cnt_num = 2,cnt_lett = 1;
    fscanf(input,"%d",&num);
    fclose(input);
    for(int i = 0; i < num; i++)
    {
        if(i % 2)
        {
            str[i] = 0x30 + cnt_num;
            cnt_num += 2;
            if(cnt_num > 9)
            {
                cnt_num = 2;
            }
        }
        else
        {
            str[i] = 0x40 + cnt_lett++;
            if(cnt_lett > 26)
             cnt_lett = 1;
        }
    }
    fprintf(output,"%s",str);
    fclose(output);
    return 0;
}
