/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catch_process.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 13:58:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 14:36:24 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

static void	print_basic(t_unit_test *test, const int status)
{
	if (WEXITSTATUS(status) == 0)
		print_test_status(test->name, "OK", GRN);
	else if (WEXITSTATUS(status) == SIGALRM) // for timer
		print_test_status(test->name, "TIMEOUT", C_YELLOW);
	else
		print_test_status(test->name, "KO", RED);
}

static void	print_signal(t_unit_test *test, const int status)
{
	if (WTERMSIG(status) == SIGSEGV)
		print_test_status(test->name, "SEGV", "\033[1;5;31m");
	else if (WTERMSIG(status) == SIGBUS)
		print_test_status(test->name, "BUSE", C_MAGENTA);
	else
	{
		print_test_status(test->name, "UNKNOWN", C_CYAN);
		ft_pser("status of unknown error: ");
		ft_pnerc(status, "");
		ft_pser(" (");
		ft_pnerc(WTERMSIG(status), C_ITALIC);
		ft_pser(")\n");
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
