/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 18:39:03 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# define NAME	"STRLEN"

int		len_basic(void);
int		len_ko(void);
int		len_null(void);
int		len_segv(void);

#endif
