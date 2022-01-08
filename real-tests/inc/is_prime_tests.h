/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_prime_tests.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:42:53 by hperrin           #+#    #+#             */
/*   Updated: 2022/01/08 12:49:00 by hperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_PRIME_TESTS_H
# define IS_PRIME_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# define NAME	"IS_PRIME"

int		is_prime_basic_true(void);
int		is_prime_basic_false(void);
int		is_prime_zero(void);
int		is_prime_int_max(void);
int		is_prime_int_min(void);

// other tests

#endif
