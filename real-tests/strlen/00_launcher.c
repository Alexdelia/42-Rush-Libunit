/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:14:44 by adelille          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/01/08 14:40:49 by adelille         ###   ########.fr       */
=======
/*   Updated: 2022/01/08 14:10:02 by hperrin          ###   ########.fr       */
>>>>>>> ec9d2849a52d56f68bb33b3ad42c0a38ed4d421f
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strlen_tests.h"

int	strlen_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
<<<<<<< HEAD
	load_test(&testlist, NAME, "Basic", &len_basic);
	load_test(&testlist, NAME, "1000 chars", &len_long);
=======
	load_test(&testlist, NAME, "Basic", &strlen_basic);
	load_test(&testlist, NAME, "Empty", &strlen_empty);
>>>>>>> ec9d2849a52d56f68bb33b3ad42c0a38ed4d421f
	return (launch_tests(&testlist));
}
