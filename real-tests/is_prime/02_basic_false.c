/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_false.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:45:50 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 12:50:59 by hperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/is_prime_tests.h"

int	is_prime_basic_false(void)
{
	if (ft_is_prime(35) == false)
		return (RET_OK);
	else
		return (RET_KO);
}
