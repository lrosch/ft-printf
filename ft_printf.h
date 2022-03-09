/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosch <lrosch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 14:28:48 by lrosch            #+#    #+#             */
/*   Updated: 2021/09/10 15:23:03 by lrosch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

/* print-functions */
int		ft_printchar(va_list args);
int		ft_printperc(void);
int		ft_printstr(va_list args);
int		ft_printint(va_list args);
int		ft_printunint(va_list args);
int		ft_printhexup(va_list args);
int		ft_printhexlow(va_list args);
int		ft_printptr(va_list args);

/* write-functions */
void	ft_put_u_nbr(unsigned int n);
void	ft_putstr(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);

/* return-value-functions */
int		ft_hexlen(unsigned long dec);
int		ft_getnbrlen(int i);
int		ft_get_u_nbrlen(unsigned int i);
int		ft_strlen(const char *s);

/* string-formatting-functions*/
char	*ft_dectohex(unsigned int dec);
char	*ft_ptrdectohex(unsigned long dec);
int		ft_tolower(int ch);
char	*ft_reverse(char *s);

/* main-functions */
int		ft_analyze(const char *s, va_list args, int i);
int		ft_printf(const char *s, ...);

#endif
