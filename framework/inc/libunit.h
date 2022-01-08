/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <adelille@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:42:18 by adelille          #+#    #+#             */
/*   Updated: 2022/01/08 19:03:45 by adelille         ###   ########.fr       */
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

# define TIMEOUT_SECOND	1

# define STDOUT	1
# define STDERR	2

# define INDENT	14

typedef struct s_unit_test
{
	char				*name;
	char				*f_name;
	int					(*f)(void);
	struct s_unit_test	*next;
}						t_unit_test;

void		load_test(t_unit_test **testlist, char *name,
				char *f_name, int (*f)(void));
int			launch_tests(t_unit_test **testlist);
void		catch_process(t_unit_test *test,
				unsigned int *ok, unsigned int *ko);

void		error(t_unit_test **testlist, char *text);

void		print_header(void);
void		print_test_status(const char *f, const char *name,
				const char *result, const char *color);
int			print_tests_result(const unsigned int ok, const unsigned int ko);

t_unit_test	*testlist_new(char *name, char *f_name, int (*f)(void));
void		testlist_addback(t_unit_test **alst, t_unit_test *n);
void		free_testlist(t_unit_test **testlist);

size_t		u_strlen(const char *str);
int			ft_abs(int n);
void		ft_bzero(void *s, size_t n);

ssize_t		ft_ps(const char *str);
ssize_t		ft_psc(const char *str, const char *color);
ssize_t		ft_pser(const char *str);
ssize_t		ft_pserc(const char *str, const char *color);
ssize_t		ft_pn(int nbr);
ssize_t		ft_pnc(int nbr, const char *color);
ssize_t		ft_pnerc(int nbr, const char *color);

#endif
