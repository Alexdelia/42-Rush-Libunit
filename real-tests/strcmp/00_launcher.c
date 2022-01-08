/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:20:16 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strcmp_tests.h"

int	strcmp_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "Basic", &strcmp_basic);
	load_test(&testlist, NAME, "Diff", &strcmp_diff);
	load_test(&testlist, NAME, "Complex", &strcmp_complex);
	load_test(&testlist, NAME, "Long", &strcmp_long);
	load_test(&testlist, NAME, "Space", &strcmp_space);
	load_test(&testlist, NAME, "Empty", &strcmp_empty);
	return (launch_tests(&testlist));
}
