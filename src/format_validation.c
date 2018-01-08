/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 17:45:29 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/08 13:34:07 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		v_spe(char c)
{
	if (c == 's' || c == 'S' || c == 'p' || c == 'd' || c == 'D' || c == 'i' ||
			c == 'o' || c == 'O' || c == 'u' || c == 'U' || c == 'x' || c == 'X'
			|| c == 'c' || c == 'C')
		return (1);
	return (0);
}

int		v_att(t_att att)
{
	/*if (c == '#' || c == '0' || c == '+' || c == '-' || c == ' ' || c == 0)
		return (1);*/
	if ((att.sign == 0 || att.sign == '+' || att.sign == ' ')
					&& (att.width_modi == 0 || att.width_modi == '0' ||
					att.width_modi == '-') && (att.diese == 0 || att.diese == 1))
		return (1);
	return (0);
}

int		v_flag(char c)
{
	if (c == 'l' || c == 'L' || c == 'h' || c == 'H' || c == 'j' || c == 'z' ||
			c == 0)
		return (1);
	return (0);
}

int		is_format_v(t_arg arg, va_list ap, int *len)
{
	if (v_att(arg.att) && v_flag(arg.flag) && v_spe(arg.spe))
	{
		str_converter(arg, ap, len);
		return (1);
	}
	return (0);
}
