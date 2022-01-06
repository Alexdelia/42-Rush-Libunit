/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:59:08 by adelille          #+#    #+#             */
/*   Updated: 2022/01/06 17:31:49 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// include

static int	launch_launchers(void)
{
	int	status;

	status = 0;
	status += strlen_launcher();
	// other function to test
	return (status); // possible not to use += but || or |	 to output only 0 or 1
}

int	main(void)
{
	// header
	return (launch_launchers());
}
