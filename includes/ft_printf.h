/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 11:51:48 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/04 17:05:40 by abouvero         ###   ########.fr       */
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

t_arg	get_struct(char *str);

#endif
