/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pn.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 15:04:32 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 20:59:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libunit.h"

static void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];
	int		is_neg;
	int		len;

	is_neg = (n < 0);
	ft_bzero(str, 13);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len++] = '0' + ft_abs(n % 10);
		n = (n / 10);
	}
	if (is_neg)
		str[len] = '-';
	else if (len > 0)
		len--;
	while (len >= 0)
		write(fd, &str[len--], 1);
}

static size_t	ft_nbrlen(const int nb)
{
	unsigned int	n;
	size_t			i;

	if (nb == 0)
		return (1);
	i = 0;
	if (nb < 0)
	{
		n = -nb;
		i++;
	}
	else
		n = nb;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

ssize_t	ft_pn(int nbr)
{
	ft_putnbr_fd(nbr, STDOUT);
	return (ft_nbrlen(nbr));
}

ssize_t	ft_pnc(int nbr, const char *color)
{
	ssize_t	size;

	size = write(STDOUT, color, u_strlen(color));
	ft_putnbr_fd(nbr, STDOUT);
	size += ft_nbrlen(nbr);
	size += write(STDOUT, DEF, u_strlen(DEF));
	return (size);
}

ssize_t	ft_pnerc(int nbr, const char *color)
{
	ssize_t	size;

	size = write(STDERR, color, u_strlen(color));
	ft_putnbr_fd(nbr, STDERR);
	size += ft_nbrlen(nbr);
	size += write(STDERR, DEF, u_strlen(DEF));
	return (size);
}
