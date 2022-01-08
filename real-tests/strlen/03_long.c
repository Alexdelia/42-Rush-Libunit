/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 14:55:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strlen_tests.h"

int	strlen_long(void)
{
	if (ft_strlen(LONG_TEXT) == LONG_TEXT_LEN)
		return (RET_OK);
	else
		return (RET_KO);
}
