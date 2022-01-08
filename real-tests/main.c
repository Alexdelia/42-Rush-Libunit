/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:59:08 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:34:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/tests.h"

static int	launch_launchers(void)
{
	int	status;

	status = 0;
	status |= strlen_launcher();
	status |= atoi_launcher();
	return (status);
}

int	main(void)
{
	print_header();
	return (launch_launchers());
}
