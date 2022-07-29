/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:34:31 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/20 18:05:06 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_ultimate_range 10 000 000 longue
// ft_ultimate_range INT_MAX ne réponde pas ?

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <limits.h>
#include <stdlib.h>

char *ft_strdup(char *src);
int	*ft_range(int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
int	ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	printf("ex00 : ft_strdup(abcde) = %s errno = %d (%s errno = %d)\n",ft_strdup("abcde"),errno,strdup("abcde"),errno);
	printf("ex00 : ft_strdup(\"\")    = %s errno = %d (%s errno = %d)\n",ft_strdup(""),errno,strdup(""),errno);
	printf("\n");


	int *tab;
	tab = ft_range(-2,4);
	printf("ex01 : ft_range    (-2,4) : ");
		for (int i = 0; i < 6; i++) printf("%2d ",tab[i]);
	printf("\n");

	int *tab_int1;
	tab_int1 = ft_range(-2,-1);
	printf("ex01 : ft_range(-2,-1) : ");
	for (int i = 0; i < 1; i++) printf("%d ",tab_int1[i]);
	printf("\n");

	int *tab_int2;
	tab_int2 = ft_range(INT_MAX-4,INT_MAX);
	printf("ex01 : ft_range(%d,%d) : ",INT_MAX-4,INT_MAX);
	for (int i = 0; i < 4; i++) printf("%d ",tab_int2[i]);
	printf("\n");
	printf("\n");


	int **tab3;
	tab3 = (int **)malloc(1*sizeof(int*));
	int ret3 = ft_ultimate_range(tab3,-2,4);
	printf("ex02 : ft_ult_range(-2,4) : ");
		for (int i = 0; i < 6; i++) printf("%2d ",(*tab3)[i]);
	printf(", ret = %d\n",ret3);

	int **tab4;
	tab4 = (int **)malloc(1*sizeof(int*));
	int ret4 = ft_ultimate_range(tab4,-2,-1);
	printf("ex02 : ft_ult_range(-2,-1) : ");
	for (int i = 0; i < 1; i++) printf("%d ",(*tab4)[i]);
	printf(", ret = %d\n",ret4);

	int **tab5 = NULL;
	tab5 = (int **)malloc(1*sizeof(int*));
	int ret5 = ft_ultimate_range(tab5,INT_MAX-4,INT_MAX);
	printf("ex02 : ft_ult_range(%d,%d) : ",INT_MAX-4,INT_MAX);
	for (int i = 0; i < 4; i++) printf("%d ",(*tab5)[i]);
	printf(", ret = %d\n",ret5);

	int **tab6 = NULL;
	tab6 = (int **)malloc(1*sizeof(int*));
	int min = 0;
	int max = 2;
	int ret6 = ft_ultimate_range(tab6,min,max);
	printf("ex02 : ft_ult_range(%d,%d) : ",min,max);
	for (int i = 0; i < (max - min); i++) printf("%d ",(*tab6)[i]);
	printf(", ret = %d\n",ret6);

	int **tab7 = NULL;
	tab7 = (int **)malloc(1*sizeof(int*));
	int min7 = 3;
	int max7 = 3;
	int ret7 = ft_ultimate_range(tab7,min7,max7);
	printf("ex02 : ft_ult_range(%d,%d) : ",min7,max7);
	for (int i = 0; i < (max7 - min7); i++) printf("%d ",(*tab7)[i]);
	printf(", ret = %d\n",ret7);


	char **strs;
	strs = (char**) malloc (sizeof(char*));
	int size = 3;
	strs[0] = "abc";
	strs[1] = "def";
	strs[2] = "ghj";
	char *sep = "_";
	printf("\n\n%s\n",ft_strjoin(size,strs,sep));
	printf("\n");
}
