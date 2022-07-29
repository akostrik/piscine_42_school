/*
norminette -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror main.c ex00/ft_strcpy.c ex01/ft_strncpy.c ex02/ft_str_is_alpha.c ex03/ft_str_is_numeric.c ex04/ft_str_is_lowercase.c ex05/ft_str_is_uppercase.c ex06/ft_str_is_printable.c ex07/ft_strupcase.c ex08/ft_strlowcase.c ex09/ft_strcapitalize.c ex10/ft_strlcpy.c ex11/ft_putstr_non_printable.c -o prog
./prog | cat -e
*/
#include <stdio.h>
#include <string.h>

char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
int				ft_str_is_alpha(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_uppercase(char *str);
int				ft_str_is_printable(char *str);
char			*ft_strupcase(char *str);
char			*ft_strlowcase(char *str);
char 			*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void			ft_putstr_non_printable(char *str);
void			*ft_print_memory(void *addr, unsigned int size);

int main(void)
{
	char dest[] = "destination string";
	printf("\nex00 : %s -> ", dest);
	ft_strcpy(dest, "source string");
	printf("%s\n", dest);
	printf("\n");

	char dest2[] = "destination string";
	printf("ex01 (0) : %s -> ", dest2);
	ft_strncpy(dest2, "source string", 0);
	printf("%s\n", dest2);
	char dest3[] = "destination string";
	printf("ex01 (3) : %s -> ", dest3);
	ft_strncpy(dest3, "source string", 3);
	printf("%s\n", dest3);
	char dest4[] = "destination string";
	printf("ex01 (13): %s -> ", dest4);
	ft_strncpy(dest4, "source string", 13);
	printf("%s\n", dest4);
	char dest5[] = "destination string";
	printf("ex01 (18): %s -> ", dest5);
	ft_strncpy(dest5, "source string", 18);
	printf("%s\n", dest5);
	char dest6[] = "destination string";
	printf("ex01 (19): %s -> ", dest6);
	ft_strncpy(dest6, "source string", 19);
	printf("%s\n", dest6);
	char dest7[] = "destination string";
	printf("ex01 (20): %s -> ", dest7); // fails
	ft_strncpy(dest7, "source string", 20);
	printf("%s\n", dest7);
	printf("\n");

	printf("ex02 : abczABCZ -> %d\n",	ft_str_is_alpha("abczABCZ"));
	printf("ex02 : abcz!+CZ -> %d\n",	ft_str_is_alpha("abcz!+CZ"));
	printf("ex02 : empty line -> %d\n",	ft_str_is_alpha(""));
	printf("\n");

	printf("ex03 : 123 -> %d\n",	ft_str_is_numeric("0123456780"));
	printf("ex03 : 12c -> %d\n",	ft_str_is_numeric("12c"));
	printf("\n");

	printf("ex04 : abc -> %d\n",	ft_str_is_lowercase("abc"));
	printf("ex04 : 12c -> %d\n",	ft_str_is_lowercase("c12"));
	printf("\n");

	printf("ex05 : ANZ -> %d\n",	ft_str_is_uppercase("ANZ"));
	printf("ex05 : F2c -> %d\n",	ft_str_is_uppercase("1Fc"));
	printf("\n");

	printf("ex06 : a+1 -> %d\n",	ft_str_is_printable("a+1"));
	printf("ex06 : \t -> %d\n",		ft_str_is_printable("\t"));
	printf("\n");

	char str1[] = "myString2";
	printf("ex07 : %s -> ", str1);
	printf("%s\n\n", ft_strupcase(str1));

	char str2[] = "myString2";
	printf("ex08 : %s -> ", str2);
	printf("%s\n\n", ft_strlowcase(str2));

	char str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et";
	printf("ex09 : %s -> ", str3);
	printf("%s\n\n", ft_strcapitalize(str3));
	// for(int i=0; i<260; i++) printf("%3d -%c-\t\t",i,i);

	int n;
	char dest9[] = "destination";
	printf("ex10 : %s  0 -> ", dest9);
	n = ft_strlcpy(dest9, "source", 0);
	printf("%s\treturn %d\n", dest9, n);

	char dest15[] = "destination";
	printf("ex10 : %s  1 -> ", dest15);
	n = ft_strlcpy(dest15, "source", 1);
	printf("%s\treturn %d\n", dest15, n);

	char dest16[] = "destination";
	printf("ex10 : %s  2 -> ", dest16);
	n = ft_strlcpy(dest16, "source", 2);
	printf("%s\treturn %d\n", dest16, n);

	char dest11[] = "destination";
	printf("ex10 : %s  5 -> ", dest11);
	n=ft_strlcpy(dest11, "source", 5);
	printf("%s\treturn %d\n", dest11, n);

	char dest13[] = "destination";
	printf("ex10 : %s  6 -> ", dest13);
	n=ft_strlcpy(dest13, "source", 6);
	printf("%s\treturn %d\n", dest13, n);

	char dest14[] = "destination";
	printf("ex10 : %s  7 -> ", dest14);
	n=ft_strlcpy(dest14, "source", 7);
	printf("%s\treturn %d\n", dest14, n);

	char dest8[] = "destination";
	printf("ex10 : %s  8 -> ", dest8);
	n=ft_strlcpy(dest8, "source", 8);
	printf("%s\treturn %d\n", dest8, n);

	char dest10[] = "destination";
	printf("ex10 : %s  9 -> ", dest10);
	n=ft_strlcpy(dest10, "source", 9);
	printf("%s\treturn %d\n", dest10, n);

	char dest12[] = "destination";
	printf("ex10 : %s 20 -> ", dest12);
	n=ft_strlcpy(dest12, "source", 20);
	printf("%s\treturn %d\n", dest12, n);
	printf("\n");

	ft_putstr_non_printable("Coucou\ntu vas bien ?");

	//char[] str= "Bonjour les aminches... c est fou	tout	ce	qu on peut faire avec			print_memory....lol.lol. ":
	//ft_print_memory(str,16);

	return (0);
}
