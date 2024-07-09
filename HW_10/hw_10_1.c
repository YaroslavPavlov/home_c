

#include <stdio.h>
#define line_width 256
int main(void)
{
	signed char c;
	int count =0;
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
	for (int i = 0; i < 3; i++)
	{
		if(i)
			fprintf(f, ", ");
		fprintf(f, "%s", line);
	}
	fprintf(f, " %d", count);
	fclose(f);
	return 0;
}
