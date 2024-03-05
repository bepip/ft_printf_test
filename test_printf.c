
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "../ft_printf/ft_printf.h"
#include <limits.h>

int main(int argc, char *argv[])
{
	int fd;
	char *input = "ft_printf_inputs.txt";
	char *expected = "expected.txt";
	close(1);
	fd = open(input, O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
        	perror("open failed");
        	exit(1);
    	}
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%c:\n");
    	ft_printf("%c", '0');
    	ft_printf(" %c ", '0');
    	ft_printf(" %c", '0' - 256);
    	ft_printf("%c ", '0' + 256);
    	ft_printf(" %c %c %c ", '0', 0, '1');
    	ft_printf(" %c %c %c ", ' ', ' ', ' ');
    	ft_printf(" %c %c %c ", '1', '2', '3');
    	ft_printf(" %c %c %c ", 0, '2', '3');
    	ft_printf(" %c %c %c ", '1', '2', 0);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%d:\n");
    	ft_printf("%d", 0);
    	ft_printf("%d", -123);
    	ft_printf("%d",INT_MAX);
    	ft_printf("%d",INT_MIN);
    	ft_printf("%d",UINT_MAX);
    	ft_printf("%d",LONG_MAX);
    	ft_printf("%d",LONG_MIN);
    	ft_printf("%d",UINT_MAX);
    	ft_printf("%d",ULONG_MAX);
    	ft_printf("%d", 9223372036854775807LL);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%%%:\n");
    	ft_printf("%%");
    	ft_printf(" %%%% ");
    	ft_printf("%% %% %% %% ");
    	ft_printf(" %% %% %%");
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%s:\n");
    	ft_printf("%s", "");
    	ft_printf("%s", " ");
    	ft_printf("%s", NULL);
    	ft_printf("%s %s", NULL, "11");
    	ft_printf("%s %s %s %s", "", " - ", "" , NULL);
    	ft_printf("%s %s %s %s", "3", " NULL ", "4" , "s");
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%i:\n");
    	ft_printf("%i", 0);
    	ft_printf("%i", -123);
    	ft_printf("%i",INT_MAX);
    	ft_printf("%i",INT_MIN);
    	ft_printf("%i",UINT_MAX);
    	ft_printf("%i",LONG_MAX);
    	ft_printf("%i",LONG_MIN);
    	ft_printf("%i",UINT_MAX);
    	ft_printf("%i",ULONG_MAX);
    	ft_printf("%i", 9223372036854775807LL);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%u:\n");
    	ft_printf("%u", 0);
    	ft_printf("%u", -123);
    	ft_printf("%u",INT_MAX);
    	ft_printf("%u",INT_MIN);
    	ft_printf("%u",UINT_MAX);
    	ft_printf("%u",LONG_MAX);
    	ft_printf("%u",LONG_MIN);
    	ft_printf("%u",UINT_MAX);
    	ft_printf("%u",ULONG_MAX);
    	ft_printf("%u", 9223372036854775807LL);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%p:\n");
	ft_printf("%p", -1);
	ft_printf("%p", 1);
	ft_printf("%p", 15);
	ft_printf("%p", 16);
	ft_printf("%p %p", LONG_MIN, LONG_MAX);
	ft_printf("%p %p", ULONG_MAX, -ULONG_MAX);
	ft_printf("%p %p", 0, 0);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%x:\n");
	ft_printf("%x", -1);
	ft_printf("%x", 1);
	ft_printf("%x", 15);
	ft_printf("%x", 16);
	ft_printf("%x %x", LONG_MIN, LONG_MAX);
	ft_printf("%x %x", ULONG_MAX, -ULONG_MAX);
	ft_printf("%x %x", 0, 0);
    	ft_printf("\n----------------------------------------\n");
    	ft_printf("%%X:\n");
	ft_printf("%X", -1);
	ft_printf("%X", 1);
	ft_printf("%X", 15);
	ft_printf("%X", 16);
	ft_printf("%X %X", LONG_MIN, LONG_MAX);
	ft_printf("%X %X", ULONG_MAX, -ULONG_MAX);
	ft_printf("%X %X", 0, 0);
	
	close(1);
	fd = open(expected, O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
        	perror("open failed");
        	exit(1);
    	}
    	printf("\n----------------------------------------\n");
    	printf("%%c:\n");
    	printf("%c", '0');
    	printf(" %c ", '0');
    	printf(" %c", '0' - 256);
    	printf("%c ", '0' + 256);
    	printf(" %c %c %c ", '0', 0, '1');
    	printf(" %c %c %c ", ' ', ' ', ' ');
    	printf(" %c %c %c ", '1', '2', '3');
    	printf(" %c %c %c ", 0, '2', '3');
    	printf(" %c %c %c ", '1', '2', 0);
    	printf("\n----------------------------------------\n");
    	printf("%%d:\n");
    	printf("%d", 0);
    	printf("%d", -123);
    	printf("%d",INT_MAX);
    	printf("%d",INT_MIN);
    	printf("%d",UINT_MAX);
    	printf("%d",LONG_MAX);
    	printf("%d",LONG_MIN);
    	printf("%d",UINT_MAX);
    	printf("%d",ULONG_MAX);
    	printf("%d", 9223372036854775807LL);
    	printf("\n----------------------------------------\n");
    	printf("%%%%:\n");
    	printf("%%");
    	printf(" %%%% ");
    	printf("%% %% %% %% ");
    	printf(" %% %% %%");
    	printf("\n----------------------------------------\n");
    	printf("%%s:\n");
    	printf("%s", "");
    	printf("%s", " ");
    	printf("%s", NULL);
    	printf("%s %s", NULL, "11");
    	printf("%s %s %s %s", "", " - ", "" , NULL);
    	printf("%s %s %s %s", "3", " NULL ", "4" , "s");
    	printf("\n----------------------------------------\n");
    	printf("%%i:\n");
    	printf("%i", 0);
    	printf("%i", -123);
    	printf("%i",INT_MAX);
    	printf("%i",INT_MIN);
    	printf("%i",UINT_MAX);
    	printf("%i",LONG_MAX);
    	printf("%i",LONG_MIN);
    	printf("%i",UINT_MAX);
    	printf("%i",ULONG_MAX);
    	printf("%i", 9223372036854775807LL);
    	printf("\n----------------------------------------\n");
    	printf("%%u:\n");
    	printf("%u", 0);
    	printf("%u", -123);
    	printf("%u",INT_MAX);
    	printf("%u",INT_MIN);
    	printf("%u",UINT_MAX);
    	printf("%u",LONG_MAX);
    	printf("%u",LONG_MIN);
    	printf("%u",UINT_MAX);
    	printf("%u",ULONG_MAX);
    	printf("%u", 9223372036854775807LL);
    	printf("\n----------------------------------------\n");
    	printf("%%p:\n");
	printf("%p", -1);
	printf("%p", 1);
	printf("%p", 15);
	printf("%p", 16);
	printf("%p %p", LONG_MIN, LONG_MAX);
	printf("%p %p", ULONG_MAX, -ULONG_MAX);
	printf("%p %p", 0, 0);
    	printf("\n----------------------------------------\n");
    	printf("%%x:\n");
	printf("%x", -1);
	printf("%x", 1);
	printf("%x", 15);
	printf("%x", 16);
	printf("%x %x", LONG_MIN, LONG_MAX);
	printf("%x %x", ULONG_MAX, -ULONG_MAX);
	printf("%x %x", 0, 0);
    	printf("\n----------------------------------------\n");
    	printf("%%X:\n");
	printf("%X", -1);
	printf("%X", 1);
	printf("%X", 15);
	printf("%X", 16);
	printf("%X %X", LONG_MIN, LONG_MAX);
	printf("%X %X", ULONG_MAX, -ULONG_MAX);
	printf("%X %X", 0, 0);
    	exit(0);
}