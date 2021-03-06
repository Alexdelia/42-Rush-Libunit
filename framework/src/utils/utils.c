/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:28:36 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 14:29:51 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libunit.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

void	ft_bzero(void *s, size_t n)
{
	char	*i;

	i = s;
	while (n)
	{
		*i = 0;
		i++;
		n--;
	}
}
