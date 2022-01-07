/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:59:08 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 15:04:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/tests.h"

static int	launch_launchers(void)
{
	int	status;

	status = 0;
	status |= strlen_launcher(); // bitwise or operator
	// other function to test
	return (status);
}

int	main(void)
{
	print_header();
	return (launch_launchers());
}
