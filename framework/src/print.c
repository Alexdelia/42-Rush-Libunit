/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:08:51 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:26:07 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	print_header(void)
{
	ft_ps("========================================================\n");
	ft_ps(BMAG);
	ft_ps("\n");
	ft_ps(" ,--.   ,--.,-----.  ,--. ,--.,--.  ,--.,--.,--------.\n");
	ft_ps(" |  |   |  ||  |) /_ |  | |  ||  ,'.|  ||  |'--.  .--'\n");
	ft_ps(" |  |   |  ||  .-.  \\|  | |  ||  |' '  ||  |   |  |\n");
	ft_ps(" |  '--.|  ||  '--' /'  '-'  '|  | `   ||  |   |  |\n");
	ft_ps(" `-----'`--'`------'  `-----' `--'  `--'`--'   `--'\n");
	ft_ps(C_RESET);
	ft_ps("\n========================================================\n\n");
}

int	print_tests_result(const unsigned int ok, const unsigned int ko)
{
	ft_ps("\n   [");
	ft_pnc(ok, GRN);
	ft_ps("|");
	ft_pnc(ko, RED);
	ft_ps("]/");
	ft_pnc(ok + ko, C_BOLD);
	ft_psc(" tests", C_BOLD);
	ft_ps("\t[");
	if (ko == 0)
	{
		ft_psc("✔", GRN);
		ft_ps(
			"]\n\n========================================================\n\n");
		return (RET_OK);
	}
	else
	{
		ft_psc("✗", RED);
		ft_ps(
			"]\n\n========================================================\n\n");
		return (RET_KO);
	}
}

void	print_test_status(const char *f, const char *name,
		const char *result, const char *color)
{
	int	i;

	ft_psc(f, "\033[1;2;36m");
	ft_ps(":\t");
	ft_psc(name, C_ITALIC);
	ft_ps(" :");
	i = u_strlen(name);
	while (++i <= INDENT)
		write(1, " ", 1);
	ft_ps("[");
	ft_psc(result, color);
	ft_ps("]\n");
}
