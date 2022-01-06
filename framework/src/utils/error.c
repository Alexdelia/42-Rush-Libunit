/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 18:23:12 by adelille          #+#    #+#             */
/*   Updated: 2022/01/06 18:30:18 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libunit.h"

void	error(t_unit_test **testlist, char *text)
{
	free_testlist(testlist);
	ft_pserc("Error: ", RED);
	ft_pserc(text, C_RED);
	exit(RET_KO);
}
