/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 15:48:54 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/nbrlen_tests.h"

int	nbrlen_int_min(void)
{
	if (ft_nbrlen(INT_MIN) == 11)
		return (RET_OK);
	else
		return (RET_KO);
}
