/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelille <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 15:47:54 by adelille          #+#    #+#             */
/*   Updated: 2022/01/07 23:22:25 by adelille         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include <limits.h>
# include <stdint.h>

size_t			ft_strlen(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
char			*ft_strnstr(const char *s, const char *to_find, size_t len);
int				ft_atoi(const char *nptr);
long			ft_atol(const char *nptr);
double			ft_atof(const char *str);
char			*ft_strdup(const char *s);

char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);

int				ft_strcmp(const char *s1, const char *s2);
int				ft_strcpy(char *dst, const char *src);

int				ft_nbrlen(int nb);
int				ft_abs(int n);
bool			ft_is_prime(int n);
bool			ft_is_prime_ul(unsigned long n);
int				ft_next_prime(int n);
int				ft_prev_prime(int n);
unsigned long	ft_next_prime_ul(unsigned long n);
unsigned long	ft_prev_prime_ul(unsigned long n);

#endif
