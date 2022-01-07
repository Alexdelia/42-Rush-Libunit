/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 14:08:51 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 14:21:08 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libunit.h"

void	print_test_status(char *name, char *result, char *color)
{
	ft_pserc(name, C_ITALIC);
	ft_pser("\t[");
	ft_pserc(result, color);
	ft_pser("]\n");
}
