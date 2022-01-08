/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:04:20 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:34:27 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

int	launch_tests(t_unit_test **testlist)
{
	unsigned int	ok;
	unsigned int	ko;
	t_unit_test		*test;
	pid_t			pid;

	ok = 0;
	ko = 0;
	test = *testlist;
	while (test)
	{
		pid = fork();
		if (pid == 0)
			exit(test->f());
		else if (pid > 0)
			catch_process(test, &ok, &ko);
		else
			error(testlist, "fork failed");
		test = test->next;
	}
	free_testlist(testlist);
	return (print_tests_result(ok, ko));
}
