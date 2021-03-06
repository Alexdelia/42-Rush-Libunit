/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:29:30 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 21:06:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	load_test(t_unit_test **testlist, char *name,
		char *f_name, int (*f)(void))
{
	testlist_addback(testlist, testlist_new(name, f_name, f));
}
