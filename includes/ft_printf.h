/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:51:48 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 18:35:16 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# define VCHAR 1
# define VINT  2
# define VSTR  3

# include <stdarg.h>
# include "../libft/includes/libft.h"

# include <stdio.h>

typedef struct	s_arg
{
	char	att;
	int		width;
	int		pre;
	char	flag;
	char	spe;
	int		type;
}				t_arg;

int		ft_printf(const char *fmt, ...);
t_arg	get_struct(char *str);
int		v_spe(char c);
int		is_format_v(t_arg arg, va_list ap, int *len);
void 	str_converter(t_arg arg, va_list ap, int *len);
int		str_controller(char *str, va_list ap);
char	*redirect(t_arg arg, va_list ap);
char	*redirect5(t_arg arg, va_list ap);
char	*width(char *s, t_arg arg);
char	*precision(char *s, t_arg arg);
char	*flags(char *s, t_arg arg);

#endif
