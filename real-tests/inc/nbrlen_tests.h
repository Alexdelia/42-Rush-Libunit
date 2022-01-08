/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbrlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 15:47:39 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NBRLEN_TESTS_H
# define NBRLEN_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# define NAME	"NBRLEN"

int		nbrlen_basic(void);
int		nbrlen_negative(void);
int		nbrlen_int_max(void);
int		nbrlen_int_min(void);

#endif
