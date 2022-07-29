// norminette -R CheckForbiddenSourceHeader
// gcc -Wall -Wextra -Werror main.c git/ex??/*


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	ft_putnbr_base(int nbr, char *base);

int main(void)
{
	char c = '\n';

	/*printf("\n");
	printf("ex00 : strlen(abc) = %d\n",ft_strlen("abc"));
	printf("ex00 : strlen(\"\") = %d\n",ft_strlen(""));
	printf("\n");

	printf("ex01 : putstr(abc) "); ft_putstr("abc");
	write(1,&c,1);
	printf("\n");*/

	/*
	printf("ex02 : putnbr(-2147483648)\n"); ft_putnbr(-2147483648); write(1,&c,1);
	printf("ex02 : putnbr(2147483647)\n"); ft_putnbr(2147483647); write(1,&c,1);
	printf("ex02 : putnbr(12345)\n"); ft_putnbr(12345); write(1,&c,1);
	printf("ex02 : putnbr(-12345)\n"); ft_putnbr(-12345); write(1,&c,1);
	printf("ex02 : putnbr(0)\n"); ft_putnbr(0); write(1,&c,1);
	printf("ex02 : putnbr(100)\n"); ft_putnbr(100); write(1,&c,1);
	printf("\n");
	*/
	/*
	printf("ex03 : atoi(42) -> %d (%d)\n",ft_atoi("42"),atoi("42"));
	printf("ex03 : atoi(-42) -> %d (%d)\n",ft_atoi("-42"),atoi("-42"));
	printf("ex03 : atoi(--+--+-42) -> %d\n",ft_atoi("--+--+-42"));
	printf("ex03 : atoi(0) -> %d (%d)\n",ft_atoi("0"),atoi("0"));
	printf("ex03 : atoi(2147483647) -> %d (%d)\n",ft_atoi("+2147483647"),atoi("2147483647"));
	printf("ex03 : atoi(-2147483648) -> %d (%d)\n",ft_atoi("-2147483648"),atoi("-2147483648"));
	printf("ex03 : atoi(\\t-42) -> %d (%d)\n",ft_atoi("\t-42"),atoi("\t-42"));
	printf("ex03 : atoi() -> %d (%d)\n",ft_atoi(""),atoi(""));
	printf("ex03 : atoi(abc) -> %d (%d)\n",ft_atoi("abc"),atoi("abc"));
	printf("ex03 : atoi(42abc) -> %d (%d)\n",ft_atoi("42abc"),atoi("42abc"));
	printf("\n");
*/
	printf("ex04 : ft_putnbr_base(8,01) -> \n");
	printf("ex04 : ft_putnbr_base(-8,01) -> \n");
	printf("ex04 : ft_putnbr_base(7,01) -> \n");
	printf("ex04 : ft_putnbr_base(2147483647,01) -> \n");
	printf("ex04 : ft_putnbr_base(-2147483648,01) -> \n");
	printf("ex04 : ft_putnbr_base(0,01) -> \n");
	printf("\n");

	printf("ex04 : ft_putnbr_base(16,0123) -> \n");
	printf("\n");

	ft_putnbr_base(8,"01"); write(1,&c,1);
	ft_putnbr_base(-8,"01"); write(1,&c,1);
	ft_putnbr_base(7,"01"); write(1,&c,1);
	ft_putnbr_base(2147483647,"01"); write(1,&c,1);
	ft_putnbr_base(-2147483648,"01"); write(1,&c,1);
	ft_putnbr_base(0,"01"); write(1,&c,1); write(1,&c,1);

	ft_putnbr_base(16,"0123"); write(1,&c,1);

	return (0);
}
