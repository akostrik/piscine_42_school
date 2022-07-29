#include "ft_stock_str.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

struct s_stock_str	*ft_str_to_tab(char *str);
struct s_stock_str	*ft_strs_to_tab(int ac, char **av);
void	ft_show_tab(struct s_stock_str *par);

int main()
{
	char *strs[5];

	strs[0] = "a";
	strs[1] = "\0";
	strs[2] = "bc";
	strs[3] = "";
	strs[4] = "def";
	//printf("strlen(\"\\0\") = %ld\n",strlen("\0"));
	//printf("strlen(\"\") = %ld\n",strlen(""));
	//printf("strlen(NULL) = %ld\n",strlen(NULL));
	ft_show_tab(ft_strs_to_tab(5,strs));
}