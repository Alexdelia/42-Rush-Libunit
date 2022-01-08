/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:37:26 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 12:56:53 by hperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/is_prime_tests.h"

int	is_prime_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "Basic True", &is_prime_basic_true);
	load_test(&testlist, NAME, "Basic False", &is_prime_basic_false);
	load_test(&testlist, NAME, "Zero", &is_prime_zero);
	load_test(&testlist, NAME, "INT_MAX", &is_prime_int_max);
	load_test(&testlist, NAME, "INT_MIN", &is_prime_int_min);
	return (launch_tests(&testlist));
}
