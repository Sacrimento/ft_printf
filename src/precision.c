/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 16:35:50 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 19:21:49 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*create_0str(int size)
{
	int		i;
	char	*s;

	i = 0;
	s = ft_strnew(size);
	while (i < size)
		s[i++] = '0';
	s[i] = '\0';
	return (s);
}

char	*precision(char *str, t_arg arg)
{
	char	*new_s;
	char	*zero_s;

	if (arg.pre == 0)
	{
		ft_bzero((void*)str, ft_strlen(str));
		return (str);
	}
	if (arg.spe == 's' && arg.pre < (int)ft_strlen(str))
		str[arg.pre] = '\0'; // May leak
	else if (arg.spe == 'd' || arg.spe == 'i' || arg.spe == 'o' ||
				arg.spe == 'u' || arg.spe == 'x' || arg.spe == 'X')
		{
			if (arg.pre > (int)ft_strlen(str))
			{
				zero_s = create_0str(arg.pre - ft_strlen(str));
				new_s = ft_strjoin(zero_s, str);
				ft_strdel(&str);
				ft_strdel(&zero_s);
				str = new_s;
			}
		}
	return (str);
}
