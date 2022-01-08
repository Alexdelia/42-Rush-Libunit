/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_int_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 15:45:50 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/nbrlen_tests.h"

int	nbrlen_int_max(void)
{
	if (ft_nbrlen(INT_MAX) == 10)
		return (RET_OK);
	else
		return (RET_KO);
}
