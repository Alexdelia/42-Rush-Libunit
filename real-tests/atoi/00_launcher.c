/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:07:14 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 14:40:40 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/atoi_tests.h"

int	atoi_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "Basic", &atoi_basic);
	load_test(&testlist, NAME, "INT_MAX", &atoi_int_max);
	load_test(&testlist, NAME, "INT_MIN", &atoi_int_min);
	load_test(&testlist, NAME, "No digits", &atoi_no_digits);
	load_test(&testlist, NAME, "Empty", &atoi_empty);
	load_test(&testlist, NAME, "1000 digits", &atoi_long);
	return (launch_tests(&testlist));
}
