/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:04:20 by adelille          #+#    #+#             */
/*   Updated: 2022/01/06 19:26:07 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

static int	print_tests_result(const unsigned int ok, const unsigned int ko)
{
	ft_pser("---------------------------------------------------\n[");
	ft_pnerc(ok, GRN);
	ft_pser("|");
	ft_pnerc(ko, RED);
	ft_pser("/");
	ft_pnerc(ok + ko, C_BOLD);
	ft_pserc(" tests", C_BOLD);
	ft_pser("]\t[");
	if (ko == 0)
	{
		ft_pserc("✔", GRN);
		ft_pser("]");
		return (RET_OK);
	}
	else
	{
		ft_pserc("✗", RED);
		ft_pser("]");
		return (RET_KO);
	}
}

int	launch_tests(t_unit_test **testlist)
{
	unsigned int	ok; // number of tests that return OK
	unsigned int	ko; // number of tests that return something else than OK
	t_unit_test		*test;
	pid_t			pid;

	ok = 0;
	ko = 0;
	test = *testlist;
	while (test)
	{
		pid = fork();
		if (pid == 0)
			run_child(test);
		else if (pid > 0)
			run_parent(test, &ok, &ko);
		else
			error(testlist, "fork failed");
		test = test->next;
	}
	free_testlist(testlist);
	return (print_tests_result(ok, ko));
}
