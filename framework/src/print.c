/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:08:51 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 15:44:41 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	print_header(void)
{
	ft_pser(BMAG);
	ft_pser("\n");
	ft_pser(" ,--.   ,--.,-----.  ,--. ,--.,--.  ,--.,--.,--------.\n");
	ft_pser(" |  |   |  ||  |) /_ |  | |  ||  ,'.|  ||  |'--.  .--'\n");
	ft_pser(" |  |   |  ||  .-.  \\|  | |  ||  |' '  ||  |   |  |\n");
	ft_pser(" |  '--.|  ||  '--' /'  '-'  '|  | `   ||  |   |  |\n");
	ft_pser(" `-----'`--'`------'  `-----' `--'  `--'`--'   `--'\n");
	ft_pser(C_RESET);
}

void	print_test_header(char *name)
{
	ft_pser("\n========================================================\n\t");
	ft_pserc(name, "\033[1;2;36m");
	ft_pser("\n");
}

int	print_tests_result(const unsigned int ok, const unsigned int ko)
{
	ft_pser("--------------------------------------------------------\n  [");
	ft_pnerc(ok, GRN);
	ft_pser("|");
	ft_pnerc(ko, RED);
	ft_pser(" / ");
	ft_pnerc(ok + ko, C_BOLD);
	ft_pserc(" tests", C_BOLD);
	ft_pser("]\t[");
	if (ko == 0)
	{
		ft_pserc("✔", GRN);
		ft_pser("]\n");
		return (RET_OK);
	}
	else
	{
		ft_pserc("✗", RED);
		ft_pser("]\n");
		return (RET_KO);
	}
}

void	print_test_status(char *name, char *result, char *color)
{
	ft_pserc(name, C_ITALIC);
	ft_pser("\t[");
	ft_pserc(result, color);
	ft_pser("]\n");
}
