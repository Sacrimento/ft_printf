/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_converter.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 12:43:43 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/05 19:08:24 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void 	str_converter(t_arg arg, va_list ap)
{
	char	*s;

	s = (arg.spe == 'X') ? ft_strtoupper(redirect(arg, ap)) : redirect(arg, ap);
	printf("%s", s);
	//ft_strdel(&s);
}
