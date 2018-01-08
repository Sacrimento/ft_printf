/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:51:48 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/08 17:04:45 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stdarg.h>
# include <limits.h>
# include "../libft/includes/libft.h"

# include <stdio.h>

typedef struct	s_att
{
	char	sign;
	char	width_modi;
	int		diese;
}				t_att;

typedef struct	s_arg
{
	t_att	att;
	int		width;
	int		pre;
	char	flag;
	char	spe;
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
