/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirect_comp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 15:21:58 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/15 15:26:51 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*singlec(int c)
{
	char	*str;

	str = ft_strnew(1);
	*str = c;
	*(str + 1) = '\0';
	return (str);
}

char	*null_str(void)
{
	char	*s;

	s = ft_strnew(6);
	*(s) = '(';
	*(s + 1) = 'n';
	*(s + 2) = 'u';
	*(s + 3) = 'l';
	*(s + 4) = 'l';
	*(s + 5) = ')';
	*(s + 6) = '\0';
	return (s);
}

char	*redirect5(t_arg arg, va_list ap)
{
	(void)arg;
	(void)ap;
	return (NULL);
}
