/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:58:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 18:44:22 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

static void	print_basic(t_unit_test *test, const int status)
{
	if (WEXITSTATUS(status) == 0)
		print_test_status(test->name, test->f_name, "OK", GRN);
	else if (WEXITSTATUS(status) == SIGALRM)
		print_test_status(test->name, test->f_name, "TIMEOUT", C_YELLOW);
	else
		print_test_status(test->name, test->f_name, "KO", RED);
}

static void	print_signal(t_unit_test *test, const int status)
{
	if (WTERMSIG(status) == SIGSEGV)
		print_test_status(test->name, test->f_name, "SIGSEGV", "\033[1;5;7;31m");
	else if (WTERMSIG(status) == SIGBUS)
		print_test_status(test->name, test->f_name, "SIGBUS", "\033[1;5;7;33m");
	else if (WTERMSIG(status) == SIGABRT)
		print_test_status(test->name, test->f_name, "SIGABRT", "\033[1;34m");
	else if (WTERMSIG(status) == SIGFPE)
		print_test_status(test->name, test->f_name, "SIGFPE", "\033[1;35m");
	else if (WTERMSIG(status) == SIGPIPE)
		print_test_status(test->name, test->f_name, "SIGPIPE", "\033[1;90m");
	else if (WTERMSIG(status) == SIGILL)
		print_test_status(test->name, test->f_name, "SIGILL", "\033[1;2;31m");
	else
	{
		print_test_status(test->name, test->f_name, "UNKNOWN", "\033[1;36m");
		ft_ps("status of unknown error: ");
		ft_pn(status);
		ft_ps(" (");
		ft_pnc(WTERMSIG(status), C_ITALIC);
		ft_ps(")\n");
	}
}

void	catch_process(t_unit_test *test, unsigned int *ok, unsigned int *ko)
{
	int	status;

	wait(&status);
	if (WIFEXITED(status) && WEXITSTATUS(status) == 0)
		(*ok)++;
	else
		(*ko)++;
	if (WIFEXITED(status))
		print_basic(test, status);
	else if (WIFSIGNALED(status))
		print_signal(test, status);
}
