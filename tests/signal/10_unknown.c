/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_unknown.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 11:44:15 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

int	unknown(void)
{
	if (true)
		return (RET_OK);
	else
		return (RET_KO);
}
