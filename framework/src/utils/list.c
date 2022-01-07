/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:45:38 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 21:06:07 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libunit.h"

static t_unit_test	*testlist_last(t_unit_test *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	testlist_addback(t_unit_test **alst, t_unit_test *n)
{
	t_unit_test	*last;

	if (alst)
	{
		if (*alst)
		{
			last = testlist_last(*alst);
			last->next = n;
		}
		else
			*alst = n;
	}
}

t_unit_test	*testlist_new(char *name, char *f_name, int (*f)(void))
{
	t_unit_test	*new;

	if (!name || !f)
		return (NULL);
	new = (t_unit_test *)malloc(sizeof(t_unit_test));
	if (!new)
		return (NULL);
	new->name = name;
	new->f_name = f_name;
	new->f = f;
	new->next = NULL;
	return (new);
}

void	free_testlist(t_unit_test **testlist)
{
	t_unit_test	*tmp;

	if (!testlist || !(*testlist))
		return ;
	while (*testlist)
	{
		tmp = (*testlist)->next;
		free(*testlist);
		*testlist = tmp;
	}
}
