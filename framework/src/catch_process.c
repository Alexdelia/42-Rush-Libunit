/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:58:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 21:05:23 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

static void	print_basic(t_unit_test *test, const int status)
{
	if (WEXITSTATUS(status) == 0)
		print_test_status(test->name, test->f_name, "OK", GRN);
	else if (WEXITSTATUS(status) == SIGALRM) // for timer
		print_test_status(test->name, test->f_name, "TIMEOUT", C_YELLOW);
	else
		print_test_status(test->name, test->f_name, "KO", RED);
}

static void	print_signal(t_unit_test *test, const int status)
{
	if (WTERMSIG(status) == SIGSEGV)
		print_test_status(test->name, test->f_name, "SIGSEGV", "\033[1;5;31m");
	else if (WTERMSIG(status) == SIGBUS)
		print_test_status(test->name, test->f_name, "SIGBUS", C_MAGENTA);
	else
	{
		print_test_status(test->name, test->f_name, "UNKNOWN", C_CYAN);
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
