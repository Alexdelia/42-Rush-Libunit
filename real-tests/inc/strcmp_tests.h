/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hperrin <hperrin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 21:19:48 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRCMP_TESTS_H
# define STRCMP_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# include <string.h>

# include "utils.h"

# define NAME	"STRCMP"

int		strcmp_basic(void);
int		strcmp_diff(void);
int		strcmp_complex(void);
int		strcmp_long(void);
int		strcmp_space(void);
int		strcmp_empty(void);

#endif
