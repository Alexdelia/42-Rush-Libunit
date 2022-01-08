/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:59:08 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 13:41:44 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/tests.h"

static int	launch_launchers(void)
{
	int	status;

	status = 0;
	status |= signal_launcher();
	status |= strlen_launcher();
	status |= strcpy_launcher();
	return (status);
}

int	main(void)
{
	print_header();
	return (launch_launchers());
}
