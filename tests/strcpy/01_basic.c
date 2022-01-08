/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:40:27 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strlen_tests.h"

int	cpy_basic(void)
{
	char	a[42];

	if (ft_strcpy(a, "Hello") == 5)
		return (RET_OK);
	else
		return (RET_KO);
}
