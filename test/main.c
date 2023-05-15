#include "../get_next_line.h"
#include <stdio.h>

// big.txt  empty.txt  main.c  mult_line.txt  one_line.txt //

void	n(void)
{
	printf("\n");
}

size_t	len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


int	comp(char *str, char *str0)
{
	int	i;

	i = 0;
	while (str[i] != '\0' || str0[i] != '\0')
	{
		printf("%c -- %c\n",str[i],str0[i]);
		i ++;
	}
	return (0);
}

void	end()
{
	printf("BUILD FAILED");
}

void	finish()
{
	printf("BUILD SUCCES");
}

int main(void)
{
	int	empty;
	int	one;
	int	multi;
	int	none;
	int	big;

	int	status;
	status = 0;

	empty = open("test/empty.txt",O_RDONLY);
	one = open("test/one_line.txt",O_RDONLY);
	multi = open("test/multi_line.txt",O_RDONLY);
	none = open("dont_existe",O_RDONLY);
	big = open("test/big.txt",O_RDONLY);
	printf("EMPTY : ");
	comp(get_next_line(empty),"(null)");
	n();
	printf("ONE LINE :\n");
	printf("%s",get_next_line(one));
	n();
	printf("MULTI LINE :\n");
	printf("%s",get_next_line(multi));
	n();
	printf("DONT EXISTE :\n");
	printf("%s",get_next_line(none));
	n();
	printf("BIG :\n");
	printf("%s",get_next_line(big));
	if (status == 0)
		finish();
	else 
		end();
}
