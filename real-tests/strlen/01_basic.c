/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 14:46:56 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strlen_tests.h"

int	strlen_basic(void)
{
	if (ft_strlen("Hello") == 5)
		return (RET_OK);
	else
		return (RET_KO);
}
