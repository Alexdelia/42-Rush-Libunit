/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 13:09:31 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 20:59:02 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libunit.h"

size_t	u_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

ssize_t	ft_ps(const char *str)
{
	return (write(STDOUT, str, u_strlen(str)));
}

ssize_t	ft_psc(const char *str, const char *color)
{
	return (write(STDOUT, color, u_strlen(color))
		+ write(STDOUT, str, u_strlen(str))
		+ write(STDOUT, DEF, u_strlen(DEF)));
}

ssize_t	ft_pser(const char *str)
{
	return (write(STDERR, str, u_strlen(str)));
}

ssize_t	ft_pserc(const char *str, const char *color)
{
	return (write(STDERR, color, u_strlen(color))
		+ write(STDERR, str, u_strlen(str))
		+ write(STDERR, DEF, u_strlen(DEF)));
}
