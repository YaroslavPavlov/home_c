#include <stdio.h>
#define line_width 1000
int main(void)
{
	signed char c;
	int count =0;
	int pos = 0;
	char line[line_width];
	FILE *f;
	f = fopen("input.txt", "r");
	while (((c=fgetc(f))!=EOF)&&(c !='\n'))
	{
		line[count++] = c;
	}
	line[count] ='\0';
	fclose(f);
	f = fopen("output.txt", "w");
	for (int i = 0; i < count-1; i++)
	{
		if (line[i] == line[count - 1])
		{
			pos = i;
			fprintf(f, "%d ", pos);
		}
		
	}
	fclose(f);
	return 0;
}
