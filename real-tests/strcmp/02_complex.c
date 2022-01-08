/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_complex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:23:02 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:24:41 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/strcmp_tests.h"

int	strcmp_complex(void)
{
	if (ft_strcmp("no yes indeed HMM a91n --+193\\ +>}<[\'",
			"no yes indeed HMM a91n --+193\\ =>}<[\'") == -18)
		return (RET_OK);
	else
		return (RET_KO);
}
