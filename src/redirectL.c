/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirectL.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 18:00:12 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 20:34:28 by abouvero         ###   ########.fr       */
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

char	*redirect4(t_arg arg, va_list ap)
{
	if (arg.spe == 'x' || arg.spe == 'X')
	{
		if (arg.flag == 0)
			return (ft_max_itoa_base((intmax_t)(unsigned int)va_arg(ap, void *), 16));
		else if (arg.flag == 'l')
			return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 16));
		else if (arg.flag == 'L')
			return (ft_max_itoa_base((intmax_t)(unsigned long long)va_arg(ap, void *), 16));
		else if (arg.flag == 'h')
			return (ft_max_itoa_base((intmax_t)(unsigned short)va_arg(ap, void *), 16));
		else if (arg.flag == 'H')
			return (ft_max_itoa_base((intmax_t)(unsigned char)va_arg(ap, void *), 16));
		else if (arg.flag == 'j')
			return (ft_max_itoa_base((intmax_t)(uintmax_t)va_arg(ap, void *), 16));
		else if (arg.flag == 'z')
			return (ft_max_itoa_base((intmax_t)(size_t)va_arg(ap, void *), 16));
	}
	else if (arg.spe == 'D')
		return (ft_max_itoa_base((intmax_t)(long)va_arg(ap, void *), 10));
	else
		return (redirect5(arg, ap));
	return (NULL);
}

char	*redirect3(t_arg arg, va_list ap)
{
	if (arg.spe == 'u')
	{
		if (arg.flag == 0)
			return (ft_max_itoa_base((intmax_t)(unsigned int)va_arg(ap, void *), 10));
		else if (arg.flag == 'l')
			return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 10));
		else if (arg.flag == 'L')
			return (ft_max_itoa_base((intmax_t)(unsigned long long)va_arg(ap, void *), 10));
		else if (arg.flag == 'h')
			return (ft_max_itoa_base((intmax_t)(unsigned short)va_arg(ap, void *), 10));
		else if (arg.flag == 'H')
			return (ft_max_itoa_base((intmax_t)(unsigned char)va_arg(ap, void *), 10));
		else if (arg.flag == 'j')
			return (ft_max_itoa_base((intmax_t)(uintmax_t)va_arg(ap, void *), 10));
		else if (arg.flag == 'z')
			return (ft_max_itoa_base((intmax_t)(size_t)va_arg(ap, void *), 10));
	}
	else if (arg.spe == 'U')
		return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 10));
	else
		return (redirect4(arg, ap));
	return (NULL);
}

char	*redirect2(t_arg arg, va_list ap)
{
	if (arg.spe == 'o')
	{
		if (arg.flag == 0)
			return (ft_max_itoa_base((intmax_t)(unsigned int)va_arg(ap, void *), 8));
		else if (arg.flag == 'l')
			return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 8));
		else if (arg.flag == 'L')
			return (ft_max_itoa_base((intmax_t)(unsigned long long)va_arg(ap, void *), 8));
		else if (arg.flag == 'h')
			return (ft_max_itoa_base((intmax_t)(unsigned short)va_arg(ap, void *), 8));
		else if (arg.flag == 'H')
			return (ft_max_itoa_base((intmax_t)(unsigned char)va_arg(ap, void *), 8));
		else if (arg.flag == 'j')
			return (ft_max_itoa_base((intmax_t)(uintmax_t)va_arg(ap, void *), 8));
		else if (arg.flag == 'z')
			return (ft_max_itoa_base((intmax_t)(size_t)va_arg(ap, void *), 8));
	}
	else if (arg.spe == 'O')
		return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 8));
	else
		return (redirect3(arg, ap));
	return (NULL);
}

char	*null_str(char *s_to_del)
{
	char	*s;

	ft_strdel(&s_to_del);
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

char	*redirect(t_arg arg, va_list ap)
{
	char	*s;
	if (arg.spe == 's')
		return ((s = va_arg(ap, char *)) == NULL ? null_str(s) : ft_strdup(s));
	else if (arg.spe == 'c')
		return (singlec((int)va_arg(ap, void *)));
	else if (arg.spe == 'p')
		return (ft_max_itoa_base((intmax_t)(unsigned long)va_arg(ap, void *), 16));
	else if (arg.spe == 'i' || arg.spe == 'd')
		{
			if (arg.flag == 'l')
				return (ft_max_itoa_base((intmax_t)(long)va_arg(ap, void *), 10));
			else if (arg.flag == 'L')
				return (ft_max_itoa_base((intmax_t)(long long)va_arg(ap, void *), 10));
			else if (arg.flag == 0)
				return (ft_max_itoa_base((intmax_t)(int)va_arg(ap, void *), 10));
			else if (arg.flag == 'h')
				return (ft_max_itoa_base((intmax_t)(short)va_arg(ap, void *), 10));
			else if (arg.flag == 'H')
				return (ft_max_itoa_base((intmax_t)(signed char)va_arg(ap, void *), 10));
			else if (arg.flag == 'z')
				return (ft_max_itoa_base((intmax_t)(size_t)va_arg(ap, void *), 10));
			return (ft_max_itoa_base((intmax_t)va_arg(ap, void *), 10));
		}
	else
		return (redirect2(arg, ap));
	return (NULL);
}
