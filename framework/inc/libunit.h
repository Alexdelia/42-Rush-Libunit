/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:42:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 14:37:38 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>

# include "color.h"

# define RET_OK	0
# define RET_KO	-1

# define STDOUT	1
# define STDERR	2

typedef struct s_unit_test
{
	char				*name;
	int					(*f)(void);
	struct s_unit_test	*next;
}						t_unit_test;

void		catch_process(t_unit_test *test,
				unsigned int *ok, unsigned int *ko);

void		error(t_unit_test **testlist, char *text);

void		print_test_status(char *name, char *result, char *color);
int			print_tests_result(const unsigned int ok, const unsigned int ko);

t_unit_test	*testlist_new(char *name, int (*f)(void));
void		testlist_addback(t_unit_test **alst, t_unit_test *new);
void		free_testlist(t_unit_test **testlist);

size_t		u_strlen(const char *str);
int			ft_abs(int n);
void		ft_bzero(void *s, size_t n);

ssize_t		ft_ps(char *str);
ssize_t		ft_psc(char *str, char *color);
ssize_t		ft_pser(char *str);
ssize_t		ft_pserc(char *str, char *color);
ssize_t		ft_pn(int nbr);
ssize_t		ft_pnc(int nbr, char *color);
ssize_t		ft_pnerc(int nbr, char *color);

#endif
