/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_struct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 16:37:12 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 19:47:33 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		get_att(char *str, t_arg *arg)
{
	int		i;

	i = 0;
	arg->att = 0;
	while ((str[i] == '#' || str[i] == '0' || str[i] == '-'
			|| str[i] == '+' || str[i] == ' ') && str[i])
		arg->att = str[i++];
	return (i);
}

int		get_width(char *str, t_arg *arg)
{
	int		i;
	char	*save;

	i = 0;
	while (ft_isdigit(str[i]))
		i++;
	save = ft_strsub(str, 0, i);
	arg->width = ft_atoi(save);
	ft_strdel(&save);
	return (i);
}

int		get_pre(char *str, t_arg *arg)
{
	int		i;
	int		count;
	char	*save;

	i = 0;
	arg->pre = -1;
	while (str[i] == '.' || ft_isdigit(str[i]))
	{
		if (str[i] == '.')
			count = i + 1;
		i++;
	}
	if (i && str[i - 1] != '.')
	{
		save = ft_strsub(str, count, i - count);
		arg->pre = ft_atoi(save);
		ft_strdel(&save);
	}
	else if (i && str[i - 1] == '.')
		arg->pre = 0;
	return (i);
}

int		get_flag(char *str, t_arg *arg)
{
	int		i;

	i = 0;
	arg->flag = 0;
	while (str[i] == 'l' || str[i] == 'h' || str[i] == 'j' || str[i] == 'z')
	{
		if (str[i] == 'l' && str[i + 1] == 'l')
		{
			arg->flag = 'L';
			i++;
		}
		else if (str[i] == 'h' && str[i + 1] == 'h')
		{
			arg->flag = 'H';
			i++;
		}
		else
			arg->flag = str[i];
		i++;
	}
	return (i);
}

t_arg	get_struct(char *str)
{
	t_arg	arg;
	int		i;

	i = 0;
	i += get_att(&str[i], &arg);
	i += get_width(&str[i], &arg);
	i += get_pre(&str[i], &arg);
	i += get_flag(&str[i], &arg);
	arg.spe = str[i];
	ft_strdel(&str);
	return (arg);
}
