/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_unknown.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:29:41 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

int	unknown(void)
{
	if (raise(SIGINT))
		return (RET_OK);
	else
		return (RET_KO);
}
