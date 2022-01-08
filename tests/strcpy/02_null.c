/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:39:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strlen_tests.h"

int	cpy_null(void)
{
	if (ft_strcpy(NULL, NULL) == 0)
		return (RET_OK);
	else
		return (RET_KO);
}
