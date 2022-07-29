/*
gcc -Wall -Wextra -Werror main.c ex00/ft_ft.c  ex01/ft_ultimate_ft.c ex02/ft_swap.c ex03/ft_div_mod.c ex04/ft_ultimate_div_mod.c ex05/ft_putstr.c ex06/ft_strlen.c -o prog
./prog | cat -e
*/
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int tmp1;
	int tmp2;
	int	n;
	int	*n1 = &n;
	int **n2 = &n1;
	int ***n3 = &n2;
	int ****n4 = &n3;
	int *****n5 = &n4;
	int ******n6 = &n5;
	int *******n7 = &n6;
	int ********n8 = &n7;
	int *********n9 = &n8;

	printf("\n");
	ft_ft(n1);
	printf("ex00 %d\n", *n1);

	ft_ultimate_ft(n9);
	printf("ex01 %d\n", *********n9);

	int a = 3;
	int b = 4;
	int *a1 = &a;
	int *b1 = &b;
	printf("ex03 : n=%d m=%d -> ", *a1, *b1);
	ft_swap(a1, b1);
	printf("after change n=%d m=%d\n", *a1, *b1);

	int	*div = &tmp1;
	int	*mod = &tmp2;
	ft_div_mod(23, 7, div, mod);
	printf("ex03 : %d / %d -> div=%d mod=%d\n", a, b, *div, *mod);

	a = 23;
	b = 7;
	a1 = &a;
	b1 = &b;
	int a_tmp = a;
	int b_tmp = b;
	ft_ultimate_div_mod(a1, b1);
	printf("ex04 : %d / %d -> div=%d mod=%d\n", a_tmp, b_tmp, *a1, *b1);

	char	*str = "Paris";
	ft_putstr(str);

	int nb_chars = ft_strlen(str);
	printf("ex06 : strlen(%s) = %d\n", str, nb_chars);

	int	tab[7] = {1,2,3,4,5,6,7};
	int size = 7;
	printf("ex07 : [");
	for (int i = 0; i < size; i++) printf("%d ",tab[i]);
	printf("] -> [");
	ft_rev_int_tab(tab, 7);
	for (int i = 0; i< size; i++) printf("%d ",tab[i]);
	printf("]\n");

	int	tab2[7] = {6,3,1,7,2,5,4};
	int size2 = 7;
	printf("ex08 : [");
	for (int i = 0; i < size2; i++) printf("%d ",tab2[i]);
	printf("] -> [");
	ft_sort_int_tab(tab2,7);
	for (int i = 0; i< size2; i++) printf("%d ",tab2[i]);
	printf("]\n");

	return (0);
}
