/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_diff.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:24:02 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strcmp_tests.h"

int	strcmp_diff(void)
{
	if (ft_strcmp("Hello", "Hell in code") == 79)
		return (RET_OK);
	else
		return (RET_KO);
}
