/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 23:41:33 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_TESTS_H
# define STRLEN_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

# define NAME	"STRLEN"

int		strlen_launcher(void);
int		basic(void);
int		null(void);
int		segv(void);
// other tests

#endif
