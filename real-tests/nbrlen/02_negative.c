/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_negative.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:08:40 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 15:48:47 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/nbrlen_tests.h"

int	nbrlen_negative(void)
{
	if (ft_nbrlen(-42) == 3)
		return (RET_OK);
	else
		return (RET_KO);
}
