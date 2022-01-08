/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:23:57 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strcmp_tests.h"

int	strcmp_long(void)
{
	if (ft_strcmp(LONG_TEXT, LONG_TEXT) == 0)
		return (RET_OK);
	else
		return (RET_KO);
}
