/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:18:45 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 11:39:09 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIGNAL_TESTS_H
# define SIGNAL_TESTS_H

# include "../../framework/inc/libunit.h"
# include "../../libft/inc/libft.h"

#include <stdio.h>
#include <sys/mman.h>

# define NAME	"SIGNAL"

int		ok(void);
int		ko(void);
int		segv(void);
int		sb(void);
int		buse(void);
int		abrt(void);
//int		fpe(void);
int		fl(void);
int		pip(void);
int		ill(void);
int		unknown(void);

#endif
