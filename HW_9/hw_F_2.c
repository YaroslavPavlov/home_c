

void sort_even_odd(int n, int a[])
{
int temp[n];
int swap = 0;

    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 == 0)
           temp[swap++] = a[i];
    }     
    
    for(int i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
          temp[swap++] = a[i];
    }    
     
    for(int i=0; i<n; i++)
        a[i] = temp[i];
}
