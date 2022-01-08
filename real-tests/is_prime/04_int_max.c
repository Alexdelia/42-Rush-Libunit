/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_int_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:51:25 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 14:57:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/is_prime_tests.h"

int	is_prime_int_max(void)
{
	if (ft_is_prime(INT_MAX) == true)
		return (RET_OK);
	else
		return (RET_KO);
}
