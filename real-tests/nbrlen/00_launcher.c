/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 15:47:32 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/nbrlen_tests.h"

int	nbrlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "Basic", &nbrlen_basic);
	load_test(&testlist, NAME, "Negative", &nbrlen_negative);
	load_test(&testlist, NAME, "INT_MAX", &nbrlen_int_max);
	load_test(&testlist, NAME, "INT_MIN", &nbrlen_int_min);
	return (launch_tests(&testlist));
}
