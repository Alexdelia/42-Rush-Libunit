/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:40:42 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strcpy_tests.h"

int	strcpy_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "Basic", &cpy_basic);
	load_test(&testlist, NAME, "NULL", &cpy_null);
	load_test(&testlist, NAME, "Empty", &cpy_empty);
	return (launch_tests(&testlist));
}
