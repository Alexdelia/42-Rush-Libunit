/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:09:19 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 15:06:06 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_TESTS_H
# define ATOI_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# include "utils.h"

# define NAME	"ATOI"

int		atoi_basic(void);
int		atoi_int_max(void);
int		atoi_int_min(void);
int		atoi_no_digits(void);
int		atoi_empty(void);
int		atoi_overflow(void);
int		atoi_multiple_sign(void);

#endif
