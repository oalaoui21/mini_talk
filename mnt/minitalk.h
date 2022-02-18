/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:59:46 by oalaoui-          #+#    #+#             */
/*   Updated: 2022/01/12 15:59:53 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>

int		ft_atoi(const char *str);
void	ft_putnbr_fd(int nb);
void	ft_putchar_fd(char c);
void	*ft_calloc(int nelem, int elsize);
int		ft_strlen(const char *s);
void	ft_putstr_fd(char *s);
void	ft_bzero(void *s, size_t n);

#endif
