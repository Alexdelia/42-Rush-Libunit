/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:21:10 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 14:56:27 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/atoi_tests.h"

int	atoi_long(void)
{
	if (ft_atoi(LONG_DIGIT) == OVERFLOW_VALUE)
		return (RET_OK);
	else
		return (RET_KO);
}
