/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <akostrik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:52:06 by akostrik          #+#    #+#             */
/*   Updated: 2022/07/18 19:49:31 by akostrik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned		int ft_strlcat(char *dest, char *src, unsigned int size);

void print_str_with0 (char *str) {
	int i = 0;
	printf("\t");
	while(1==1)
	{
		if (str[i]=='\0')
		{
			printf("0");
			break;
		}
		if(i >= 15)
			break;
		printf("*");
		i++;
	}
}

unsigned int strlcat_inet(char *dst, char *src, unsigned int size)
{
	char *d = dst;
	char *s = src;
	unsigned int n = size;
	unsigned int dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dst;
	n = size - dlen;

	if (n == 0) {
		//printf("\n          strcat_inet return %d + %d\n",dlen,strlen(s));
		return(dlen + strlen(s));
	}
	//printf("\n          strcat_inet dlen = %d \n",dlen);
	while (*s != '\0') {
		if (n != 1) {
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	//printf("\n          strcat_inet dlen = %d \n",dlen);
	//printf("\n          strcat_inet return %d + %d \n",dlen,(s - src));
	return(dlen + (s - src));	
}

int main(void)
{
	/*
	printf("ex00 : abc ab -> %2d (%2d)\n", ft_strcmp("abc","ab"), strcmp("abc","ab"));
	printf("ex00 : abc Ab -> %2d (%2d)\n", ft_strcmp("abc","Ab"), strcmp("abc","Ab"));
	printf("ex00 : Abc ab -> %2d (%2d)\n", ft_strcmp("Abc","ab"), strcmp("Abc","ab"));
	printf("ex00 : ab abc -> %2d (%2d)\n", ft_strcmp("ab","abc"), strcmp("ab","abc"));
	printf("ex00 : aa bb  -> %2d (%2d)\n", ft_strcmp("aa","bb"), strcmp("aa","bb"));
	printf("ex00 : aa aa  -> %2d (%2d)\n", ft_strcmp("aa","aa"), strcmp("aa","aa"));
	printf("ex00 : \"\" aa  -> %2d (%2d)\n", ft_strcmp("","aa"), strcmp("","aa"));
	printf("ex00 : aa \"\"  -> %2d (%2d)\n", ft_strcmp("aa",""), strcmp("aa",""));
	printf("ex00 : \"\" \"\"  -> %2d (%2d)\n", ft_strcmp("",""), strcmp("",""));
	printf("\n");
*/
	char s1[] = "Test1";
	char s2[] = "OK";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";
	char s7[] = "ShorterTest";

	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
	printf("%d, %d\n", ft_strncmp(s5, s7, 8), strncmp(s5, s7, 8));
	printf("--------------------------------------------------\n");

	printf("ex01 : abc ab  0 -> %3d (%3d)\n",     ft_strncmp("abc","ab",0),  strncmp("abc","ab",0));
	printf("ex01 : abc ab  1 -> %3d (%3d)\n",     ft_strncmp("abc","ab",1),  strncmp("abc","ab",1));
	printf("ex01 : abc ab  2 -> %3d (%3d)\n",     ft_strncmp("abc","ab",2),  strncmp("abc","ab",2));
	printf("ex01 : abc ab  3 -> %3d (%3d)\n",     ft_strncmp("abc","ab",3),  strncmp("abc","ab",3));
	printf("ex01 : ab abC  3 -> %3d (%3d)\n",     ft_strncmp("ab","abC",3),  strncmp("ab","abC",3));
	printf("ex01 : ab abC  5 -> %3d (%3d)\n",     ft_strncmp("ab","abC",5),  strncmp("ab","abC",5));
	printf("ex01 : abC ab  5 -> %3d (%3d)\n",     ft_strncmp("abC","ab",5),  strncmp("abC","ab",5));
	printf("ex01 : abd abc 5 -> %3d (%3d)\n",     ft_strncmp("abd","abc",5), strncmp("abd","abc",5));
	printf("ex01 : abc abc 5 -> %3d (%3d)\n",     ft_strncmp("abc","abC",5), strncmp("abc","abC",5));
	printf("ex01 : ab abc  5 -> %3d (%3d)\n",     ft_strncmp("ab","abc",5),  strncmp("ab","abc",5));
	printf("ex01 : abc abc 5 -> %3d (%3d)\n",     ft_strncmp("abc","ab",5),  strncmp("abc","ab",5));
	printf("ex01 : abc abd 3 -> %3d (%3d)\n",     ft_strncmp("ab","abC",3),  strncmp("ab","abC",3));
	printf("ex01 : ab \"\"   3 -> %3d (%3d)\n",   ft_strncmp("ab","",3),     strncmp("ab","",3));
	printf("ex01 : \"\" ab   3 -> %3d (%3d)\n",   ft_strncmp("","ab",3),     strncmp("","ab",3));
	printf("ex01 : \"\" \"\"   3 -> %3d (%3d)\n", ft_strncmp("","",3),       strncmp("","",3));
	printf("\n");

	char	dest1[10] = "ab";
	char	dest2[10] = "ab";
	printf("ex02 : %s + AB = ", dest1);
	printf("%s ( %s + AB = ", ft_strcat(dest1,"AB"), dest2);
	printf("%s )\n\n", strcat(dest2,"AB"));

	char	dest3[10] = "ab";
	char	dest4[10] = "ab";
	printf("ex03 : %s + AB + 0 = ", dest3);
	printf("%s\t( %s + AB + 0 = ", ft_strncat(dest3,"AB",0), dest4);
	printf("%s )\n", strncat(dest4,"AB",0));

	char	dest5[10] = "ab";
	char	dest6[10] = "ab";
	printf("ex03 : %s + AB + 1 = ", dest5);
	printf("%s\t( %s + AB + 1 = ", ft_strncat(dest5,"AB",1), dest6);
	printf("%s )\n", strncat(dest6,"AB",1));

	char	dest7[10] = "ab";
	char	dest8[10] = "ab";
	printf("ex03 : %s + AB + 2 = ", dest7);
	printf("%s\t( %s + AB + 2 = ", ft_strncat(dest7,"AB",2), dest8);
	//printf("%s )\n", strncat(dest8,"AB",2));

	char	dest9[10] = "ab";
	char	dest10[10] = "ab";
	printf("ex03 : %s + AB + 3 = ", dest9);
	printf("%s ( %s + AB + 3 = ", ft_strncat(dest9,"AB",3), dest10);
	printf("%s )\n", strncat(dest10,"AB",3));

	char	dest11[10] = "ab";
	char	dest12[10] = "ab";
	printf("ex03 : %s + AB + 4 = ", dest11);
	printf("%s ( %s + AB + 4 = ", ft_strncat(dest11,"AB",4), dest12);
	printf("%s )\n", strncat(dest12,"AB",4));
	printf("\n");

	char s1a[] = "This is OK for now";
	char s2a[] = "OK";
	char s1b[] = "This is OK for now";
	char s2b[] = "OK";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");

	printf("ex04 : abcde cd     -> %s (%s)\n",   ft_strstr("abcde","cd"),    strstr("abcde","cd"));
	printf("ex04 : abcde abc    -> %s (%s)\n",   ft_strstr("abcde","abcd"),  strstr("abcde","abc"));
	printf("ex04 : abcde \"\"     -> %s (%s)\n", ft_strstr("abcde",""),      strstr("abcde",""));
	printf("ex04 : \"\" abc       -> %s (%s)\n", ft_strstr("","abc"),        strstr("","abc"));
	printf("ex04 : abcde bce    -> %s (%s)\n",   ft_strstr("abcde","bce"),   strstr("abcde","bce"));
	printf("ex04 : abcde e      -> %s (%s)\n",   ft_strstr("abcde","e"),     strstr("abcde","e"));
	printf("ex04 : abcabcde abc -> %s (%s)\n",   ft_strstr("abcabcde","abc"),strstr("abcabcde","abc"));
	printf("ex04 : abcdef efg   -> %s (%s)\n",   ft_strstr("abcdef","efg"),  strstr("abcdef","efg"));
	printf("ex04 : abcdef fg    -> %s (%s)\n",   ft_strstr("abcdef","fg"),   strstr("abcdef","fg"));
	printf("ex04 : abcdef ho    -> %s (%s)\n",   ft_strstr("abcdef","ho"),   strstr("abcdef","ho"));
	printf("ex04 : ab abcde     -> %s (%s)\n",   ft_strstr("ab","abcde"),    strstr("ab","abcde"));
	printf("ex04 : ab bcde      -> %s (%s)\n",   ft_strstr("ab","bcde"),     strstr("ab","bcde"));
	printf("\n");


	char	dest17[10] = "abc";
	char	dest18[10] = "abc";
	unsigned int size_with_0 = 0;
	printf("ex05 : %s AB        %d -> ",dest17,size_with_0);
	unsigned int n17 = ft_strlcat(dest17,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest17, n17,size_with_0-2-1);
	unsigned int n18 = strlcat_inet(dest18,"AB",size_with_0);
	printf("(%5s ret %d)",dest18,n18);
	printf("\n");

	char	dest13[10] = "abc";
	char	dest14[10] = "abc";
	size_with_0 = 1;
	printf("ex05 : %s AB        %d -> ",dest13,size_with_0);
	unsigned int n13 = ft_strlcat(dest13,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest13, n13,size_with_0-2-1);
	unsigned int n14 = strlcat_inet(dest14,"AB",size_with_0);
	printf("(%5s ret %d)",dest14,n14);
	printf("\n");

	char	dest15[10] = "abc";
	char	dest16[10] = "abc";
	size_with_0 = 2;
	printf("ex05 : %s AB        %d -> ",dest15,size_with_0);
	unsigned int n15 = ft_strlcat(dest15,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest15, n15, size_with_0-2-1);
	unsigned int n16 = strlcat_inet(dest16,"AB",size_with_0);
	printf("(%5s ret %d)",dest16,n16);
	printf("\n");

	char	dest19[10] = "abc";
	char	dest20[10] = "abc";
	size_with_0 = 3;
	printf("ex05 : %s AB        %d -> ",dest19,size_with_0);
	unsigned int n19 = ft_strlcat(dest19,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest19, n19, size_with_0-2-1);
	unsigned int n20 = strlcat_inet(dest20,"AB",size_with_0);
	printf("(%5s ret %d)",dest20,n20);
	printf("\n");

	char	dest21[10] = "abc";
	char	dest22[10] = "abc";
	size_with_0 = 4;
	printf("ex05 : %s AB        %d -> ",dest21,size_with_0);
	unsigned int n21 = ft_strlcat(dest21,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest21, n21, size_with_0-2-1);
	unsigned int n22 = strlcat_inet(dest22,"AB",size_with_0);
	printf("(%5s ret %d)",dest22,n22);
	printf("\n");

	char	dest25[10] = "abc";
	char	dest26[10] = "abc";
	size_with_0 = 5;
	printf("ex05 : %s AB        %d -> ",dest25,size_with_0);
	unsigned int n25 = ft_strlcat(dest25,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest25, n25, size_with_0-2-1);
	unsigned int n26 = strlcat_inet(dest26,"AB",size_with_0);
	printf("(%5s ret %d)",dest26,n26);
	printf("\n");

	char	dest27[10] = "abc";
	char	dest28[10] = "abc";
	size_with_0 = 6;
	printf("ex05 : %s AB        %d -> ",dest27,size_with_0);
	unsigned int n27 = ft_strlcat(dest27,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest27, n27, size_with_0-2-1);
	unsigned int n28 = strlcat_inet(dest28,"AB",size_with_0);
	printf("(%5s ret %d)",dest28,n28);
	printf("\n");

	char	dest37[10] = "abc";
	char	dest38[10] = "abc";
	size_with_0 = 7;
	printf("ex05 : %s AB        %d -> ",dest37,size_with_0);
	unsigned int n37 = ft_strlcat(dest37,"AB",size_with_0);
	printf("%5s\tret %d (appends at most %2d bytes)", dest37, n37, size_with_0-2-1);
	unsigned int n38 = strlcat_inet(dest38,"AB",size_with_0);
	printf("(%5s ret %d)",dest38,n38);
	printf("\n");

	printf("\n");

	return (0);
}

