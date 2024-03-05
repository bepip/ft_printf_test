#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

int	main()
{
	char *input = "ft_printf_inputs.txt";
	char *expected = "expected.txt";
	FILE *fp1 = fopen(input, "r");
	FILE *fp2 = fopen(expected, "r");
	char inp[100];
	char exp[100];
	int line = 0;
	if (!fp1 || !fp2)
		return (-1);
	int	ch1 = 0;
	int	ch2 = 0;
	do
	{
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);
		if (ch1 == '\n' && ch2 == '\n')
			++line;
		if (ch1 != ch2)
		{
			printf("break at line %d\n", line);
			printf("expected: %c\t\tgot %c", ch1,ch2);
			break;
		}
		if (ch1 == EOF || ch2 == EOF)
			printf("SUCCESS");
	}
	while (ch1 != EOF && ch2 != EOF);
	fclose(fp1);
	fclose(fp2);
}
