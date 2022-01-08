/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_unknown2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 18:43:01 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

int	unknown2(void)
{
	if (raise(SIGTRAP))
		return (RET_OK);
	else
		return (RET_KO);
}
