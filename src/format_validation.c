/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 17:45:29 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/04 18:35:53 by abouvero         ###   ########.fr       */
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

int		v_att(char c)
{
	if (c == '#' || c == '0' || c == '+' || c == '-' || c == ' ' || c == 0)
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

int		is_format_v(t_arg arg)
{
	if (v_att(arg.att) && v_flag(arg.flag) && v_spe(arg.spe))
	{
		printf("C'est parti pour le traitement\n");
		return (1);
	}
	return (0);
}
