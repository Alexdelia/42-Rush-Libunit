/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_ill.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/09 12:13:47 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

int	ill(void)
{
	__builtin_trap();
	if (true)
		return (RET_OK);
	else
		return (RET_KO);
}
