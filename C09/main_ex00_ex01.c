#include "./includes/ft.h"

#include <stdio.h>

void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	int n[1];
	int m[1];
	*n = 5;
	*m = 3;

	ft_putchar('A');
	ft_putstr("\nmy line\n");
	printf("n = %d, m = %d -> ",*n,*m);
	ft_swap(n,m);
	printf("n = %d, m = %d\n",*n,*m);
	printf("ft_strlen(abc) = %d\n",ft_strlen("abc"));
	printf("ft_strcmp(abd,abc) = %d\n",ft_strcmp("abd","abc"));
	printf("ft_strcmp(abd,abd) = %d\n",ft_strcmp("abd","abd"));
	printf("ft_strcmp(abd,abe) = %d\n",ft_strcmp("abd","abe"));
}
