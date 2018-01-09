/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvero <abouvero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/09 13:01:26 by abouvero          #+#    #+#             */
/*   Updated: 2018/01/09 15:06:02 by abouvero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <locale.h>
#include <wchar.h>
#include <unistd.h>
#include "../libft/includes/libft.h"

unsigned long	get_mask(int size)
{
	if (size == 2)
		return (0xc080);
	else if (size == 3)
		return (0xe08080);
	else if (size == 4)
		return (0xf0808080);
	else if (size == 5)
		return (0xf880808080);
	else
		return (0xfc8080808080);
}

int				get_encoding_size(unsigned int c)
{
	if (c <= 0x7f)
		return (1);
	else if (c <= 0x7ff)
		return (2);
	else if (c <= 0xffff)
		return (3);
	else if (c <= 0x1fffff)
		return (4);
	else if (c <= 0x3ffffff)
		return (5);
	else if (c <= 0x7fffffff)
		return (6);
	else
		return (-1);
}

int 	ft_putwchar(unsigned int c)
{
	int				size;
	unsigned long	mask;
	unsigned char	byte;

	if ((size = get_encoding_size(c)) == 1)
		return (write(1, &c, 1));
	else if (size == -1)
		return (-1);
	mask = get_mask(size);
	byte = 192 + (c >> size * 6 | mask >> (size) * 6);
	printf("PRINTFFFF %d", byte);
	write(1, &byte, 1);
	while (size-- > 0)
	{
		byte = (c >> size * 6 & 63) | 0x80;
		write(1, &byte, 1);
	}
	return (0);
}

int		main(void)
{
	int c = 0;
	char* l = setlocale(LC_ALL, "");
	if (l == NULL) {
		printf("Locale not set\n");
	} else {
		printf("Locale set to %s\n", l);
	}
	ft_putwchar(L'ǐ');
	return (0);
}
