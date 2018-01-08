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

char			*fill_bin_to_mask(char *bin, char *mask)
{
	int		size;
	int		i;
	int		len_bin = ft_strlen(bin);
	int		len_mask = ft_strlen(mask);

	i = 0;
	while (len_bin > 0)
	{
		if (i >= 6 && i % 6 == 0)
			len_mask -= 2;
		mask[len_mask-- - 1] = bin[len_bin-- - 1];
		i++;
	}
	return (mask);
}

int			ft_atoi_base(const char *str, int base);

int				ft_putwchar(unsigned int c)
{

	int		size;
	char	*maskS;
	char	*nbS;
	unsigned char	byte;
	int		i = -8;
	char	*save;
	// while (c /= 2)
		// i++

	if ((size = get_encoding_size(c)) == -1)
		return (-1);
	else if (size == 1)
		return (write(1, &c, 1));
	maskS = ft_max_itoa_base((intmax_t)get_mask(size), 2);
	nbS = ft_max_itoa_base((intmax_t)c, 2);
	fill_bin_to_mask(nbS, maskS);
	ft_strdel(&nbS);
	while (size-- > 0)
	{
		save = ft_strsub(maskS, (i += 8), 8);
		byte = (unsigned char)ft_atoi_base(save, 2);
		write (1, &byte, 1);
		ft_strdel(&save);
	}
	.ft_strdel(&maskS);
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
	while (c < 4096)
		ft_putwchar(c++);

	// printf("%C\n", 945);
	//printf("%C\n", L'µ');
	// ft_putwchar(945);
	//ft_putwchar(L'ڇ');
	// printf("%s\n", fill_bin_to_mask(strdup("2222222"), strdup("1110000010000000")));
	//ft_putwchar(L'Á');

	return 0;
}
