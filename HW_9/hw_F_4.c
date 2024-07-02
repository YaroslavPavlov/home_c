void print_digit(char s[])
{
    int result[10]={0};

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            result[s[i]-'0']++;
        }
    }

    for(int i = 0; i<10; i++)
    {
        if(result[i] != 0)
        {
            printf("%d %d\n", i, result[i]);
        }
    }
}
