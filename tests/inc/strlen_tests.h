/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 23:14:56 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include <stddef.h> // for size_t def

# include "../../framework/inc/libunit.h"

size_t	ft_strlen(const char *str);

int		strlen_launcher(void);
int		basic_test(void);
// other tests

#endif
