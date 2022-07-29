#include <stdio.h>
#include <limits.h>
#include <unistd.h>

#define MAXLENGTH 11

void ft_foreach(int *tab, int length, void(*f)(int));
int *ft_map(int *tab, int length, int(*f)(int));
int ft_any(char **tab, int(*f)(char*));
int ft_count_if(char **tab, int length, int(*f)(char*));
int ft_is_sort(int *tab, int length, int(*f)(int, int));

void	write_int_min(void)
{
	char	buf[11];

	buf[0] = '-';
	buf[1] = '2';
	buf[2] = '1';
	buf[3] = '4';
	buf[4] = '7';
	buf[5] = '4';
	buf[6] = '8';
	buf[7] = '3';
	buf[8] = '6';
	buf[9] = '4';
	buf[10] = '8';
	write (1, &buf, 11);
}

void	ft_putnbr(int nb)
{
	int		n;
	char	buf[MAXLENGTH];
	int		pos;
	char	c;

	if (nb == -2147483648)
		write_int_min();
	else
	{
		n = nb;
		pos = 0;
		if (nb < 0)
		{
			c = '-';
			write (1, &c, 1);
			n = -nb;
		}
		while (n > 0)
		{
			buf[pos++] = n % 10 + '0';
			n = n / 10;
		}
		while (pos >= 0)
			write (1, &buf[pos--], 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	size_t	i;

	i = 0;
	while (1 == 1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0')
			return (-1);
		if (s2[i] == '\0')
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
}

int	func_ex01(int nb)
{
	return (nb+2);
}

int	func_ex02(char *str)
{
	if (ft_strcmp(str,"cd") == 0)
		return (1);
	return (0);
}

int	func_ex04(int a, int b)
{
	return (a - b);
}

int main ()
{
	int	tab[] = {1, 2, 3, 4, 5};
	int i;

	//ft_foreach(tab, 5, &ft_putnbr);
/*
	int *tab2 = ft_map(tab, 5, &func_ex01);
	i = 0;
	printf("ex01 : ");
	while (i < 5)
		printf("%d ",tab2[i++]);
	printf("\n");

	char *tab3[6];
	tab3[0] = "";
	tab3[1] = "cdr";
	tab3[2] = NULL;
	tab3[3] = "cd";
	tab3[4] = "ijkl";
	tab3[5] = NULL;
	printf("ex02 : if any = %d\n",ft_any(tab3, &func_ex02));

	char *tab4[5];
	tab4[0] = "";
	tab4[1] = "cd";
	tab4[2] = NULL;
	tab4[3] = "cd";
	tab4[4] = "ijkl";
	printf("ex03 : count if = %d\n",ft_count_if(tab4, 5, &func_ex02));
*/
	//int tab5[26] = {7, 7, 7, 7, 6, 6, 6, 6, 5, 5, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 1, 1, 2};
	int tab5[6] = {2, 3, 4, 5, 6, 7};
	printf("ex04 : is sort = %d\n",ft_is_sort(tab5, 6, &func_ex04));
}