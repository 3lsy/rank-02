#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

/*
 test
*/
#include <stdlib.h>
#include <stdio.h>
int main()
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));
	t_list *d = malloc(sizeof(t_list));

	a->next = b;
	b->next = c;
	c->next = d;
	d->next = NULL;
	printf("%d\n", ft_list_size(a));
	return (0);
}
