/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:51:48 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/04 19:11:48 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

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
}				t_arg;

int		ft_printf(const char *fmt, ...);
t_arg	get_struct(char *str);
int		v_spe(char c);
int		is_format_v(t_arg arg);

#endif
