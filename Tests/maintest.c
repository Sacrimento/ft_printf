#include "../includes/ft_printf.h"

void 	reverse_width(char *s)
{
	int		i;

	i = 0;
	while (s[i] == '0' || s[i] == ' ')
		i++;
	if (s[i] == '-' && i > 0)
	{
		s[i] = s[i - 1];
		s[0] = '-';
	}
	else if (s[i] == '+' && i > 0)
	{
		s[i] = s[i - 1];
		s[0] = '+';
	}
	printf("%s\n", s);
}

int		main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	char	test = 0;
	char	*ptr = &test;
	int		test2 = 42;
	//t_arg	arg;
	//arg = get_struct(ft_strdup(argv[1]));
	//printf("%c %d %d %c %c\n", arg.att, arg.width, arg.pre, arg.flag, arg.spe);
	//printf("%d");
	//ft_printf("Salut %#53.11cc'est le test %d!\n", 'a', 42);
	//printf("%p\n", ptr);
	//printf("%s\n", ft_max_itoa_base((intmax_t)(unsigned long int)ptr, 16));
	// ft_printf("%p", &test);
	// printf("  %p\n", &test);
    //
	// ft_printf("%s", "Purcentrage S");
	// printf("  %s\n", "Purcentage S");
    //
	// ft_printf("%c", 'C');
	// printf("  %c\n", 'C');
    //
	// ft_printf("%ld", 2147483648);
	// printf("   %ld\n", 2147483648);
    //
	// ft_printf("%li", 2147483648);
	// printf("   %li\n", 2147483648);
    //
	// ft_printf("%lo", 2147483648);
	// printf("   %lo\n", 2147483648);
    //
	// ft_printf("%ld", -2147483648);
	// printf("   %ld\n", -2147483648);
    //
	// ft_printf("%lx", 2147483648);
	// printf("   %lx\n", 2147483648);
    //
	// ft_printf("%lX", 42);
	// printf("   %lX\n", 42);
	// write(1, &test, 1);

	reverse_width(ft_strdup("000000-42"));


	// printf("%50c\n", 0);
	//ft_printf("%#-+25x\n", 42);
	// ft_printf("moi @moulitest: %#.o %#.0o\n", 0, 0);
	// printf("lui @moulitest: %#.o %#.0o\n", 0, 0);
	// ft_putnbr(printf("%.50d\n", 2147483647));
	// ft_putnbr(ft_printf("%.50d\n", 2147483647));
	return (0);
}
