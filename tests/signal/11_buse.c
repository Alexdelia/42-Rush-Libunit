/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_buse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 11:40:46 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/signal_tests.h"

int	buse(void)
{
    FILE *f;
    int *m;

	f = tmpfile();
	m = mmap(0, 4, PROT_WRITE, MAP_PRIVATE, fileno(f), 0);
    if (*m)
		return (RET_OK);
	else
		return (RET_KO);
}
