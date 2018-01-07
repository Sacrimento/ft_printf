/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:09:28 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/07 16:26:32 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	check_special_char(const char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\t' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

static long	convert_to_int(const char *str, int i, int base)
{
	long	nbr;

	nbr = 0;
	while ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F'))
	{
		nbr = (nbr * base) + (str[i] - '0');
		i++;
	}
	return (nbr);
}

int			ft_atoi_base(const char *str, int base)
{
	int		i;
	int		negative;
	long	nbr;

	negative = 0;
	i = check_special_char(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' && base == 10)
			negative = 1;
		i++;
	}
	nbr = convert_to_int(str, i, base);
	return (negative ? -nbr : nbr);
}
