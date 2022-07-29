#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
int		ft_list_size(t_list *begin_list);
void	ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_list_last(t_list *begin_list);
void	printf_element(t_list	*lst, char *comment);
void	ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_list_push_strs(int size, char **strs);
void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_reverse(t_list **begin_list);

void printf_element(t_list	*lst, char *comment)
{
	int *i;
	
	if (lst == NULL)
	{
		printf("%15s ", comment);
		printf("NULL\n");
		return ;
	}
	printf("%15s ", comment);
	printf("%p = { %s, %p }\n", lst, (char *)lst->data,lst->next);
}

void printf_list(t_list	*lst, char *comment)
{
	t_list	*cour;

	if (lst == NULL)
	printf("list = NULL, %15s\n", comment);
	printf("list %15s :\n", comment);
	cour = lst;
	while(cour != NULL)
	{
		printf_element(cour,"");
		cour = cour -> next;
	}
}

void free_fct(void *data) // if data = string
{
/*
	int i;
	printf("free_fct %s\n", (char *)data);
	i = 0;
	while ((data+i) != '\0' && i <= 6)
	{
		printf("i = %d, data+i = %s\n",i,(char*)(data+i));
		i++;
	}*/
	data = NULL; 
}

int main (void)
{
	printf("ex00:\n"); /////////////////////////////////
	t_list **lst;
	*lst = ft_create_elem("a____");
	printf_element(*lst, "created");
	printf_list(*lst,"created");
	printf("\n");

	printf("ex01:\n"); /////////////////////////////////////////
	ft_list_push_front(lst, "b____");
	printf_element(*lst, "pushed");

	ft_list_push_front(lst, "c____");
	printf_element(*lst, "pushed");

	ft_list_push_front(lst, "front");
	printf_element(*lst, "pushed");

	printf_list(*lst,"pushed front");
	printf("\n");

	printf("ex02:\n"); /////////////////////////////////////////
	printf("size = %d\n",ft_list_size(*lst));
	printf("\n");

	printf("ex03:\n"); /////////////////////////////////////////
	printf_element(ft_list_last(*lst),"last elt");
	printf("\n");

	printf("ex04:\n"); /////////////////////////////////////////
	ft_list_push_back(lst, "back_");
	printf_list(*lst,"ex04 puched back");
	printf("\n");
/*
	printf("ex05:\n"); /////////////////////////////////////////
	char *strs[3];
	strs[0] = "5_a__";
	strs[1] = "5_b__";
	strs[2] = "5_c__";
	t_list *lst2 = ft_list_push_strs(3, (char **)strs);
	printf_list(lst2,"new list, pushed 3 strs");
	printf("\n");

	printf("ex06 clear list:\n"); /////////////////////////////////////////
	ft_list_clear(lst2, &free_fct); // cleared list : 0x55d5c3c3b7b0 = { , (nil) }
	printf_list(lst2,"cleared list");
*/
	printf("ex07:\n"); /////////////////////////////////////////
	printf_element(ft_list_at(*lst, 1),"1er elt");
	printf_element(ft_list_at(*lst, 2),"2e elt");
	printf_element(ft_list_at(*lst, 3),"3e elt");
	printf_element(ft_list_at(*lst, 8),"8e elt");
	printf("\n");
/*
	printf("ex08:\n"); /////////////////////////////////////////
	ft_list_reverse(lst);
	printf_list(*lst,"inversed list");
	printf("\n");*/
}
