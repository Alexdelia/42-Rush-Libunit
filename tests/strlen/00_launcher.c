/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
/*   Updated: 2022/01/06 17:31:18 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../inc/strlen_tests.h" // list of function to test

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	// header of test strlen
	load_test(&testlist, "Basic", &basic_test);
	// other tests
	return (launch_tests(&testlist));
}
