/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_int_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:55:56 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 12:57:17 by hperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/is_prime_tests.h"

int	is_prime_int_min(void)
{
	if (ft_is_prime(INT_MIN) == false)
		return (RET_OK);
	else
		return (RET_KO);
}
