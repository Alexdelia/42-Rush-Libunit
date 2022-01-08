/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 18:42:23 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

#define NAME	"SIGNAL"

int	signal_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, NAME, "OK", &ok);
	load_test(&testlist, NAME, "KO", &ko);
	load_test(&testlist, NAME, "Segfault", &segv);
	load_test(&testlist, NAME, "SEGV/BUSE", &sb);
	load_test(&testlist, NAME, "Bus error", &buse);
	load_test(&testlist, NAME, "Abort", &abrt);
	load_test(&testlist, NAME, "Floating-point exception", &fl);
	load_test(&testlist, NAME, "Pipe error", &pip);
	load_test(&testlist, NAME, "Illegal instruction", &ill);
	load_test(&testlist, NAME, "Unknown", &unknown);
	load_test(&testlist, NAME, "Unknown 2", &unknown2);
	return (launch_tests(&testlist));
}
