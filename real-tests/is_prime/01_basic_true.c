/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:41:16 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 12:45:12 by hperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/is_prime_tests.h"

int	is_prime_basic_true(void)
{
	if (ft_is_prime(13) == true)
		return (RET_OK);
	else
		return (RET_KO);
}
