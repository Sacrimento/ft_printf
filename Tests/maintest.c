#include "../includes/ft_printf.h"

int		main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	char	test = 'c';
	char	*ptr = &test;
	int		test2 = 42;
	//t_arg	arg;
	//arg = get_struct(ft_strdup(argv[1]));
	//printf("%c %d %d %c %c\n", arg.att, arg.width, arg.pre, arg.flag, arg.spe);
	//printf("%d");
	//ft_printf("Salut %#53.11cc'est le test %d!\n", 'a', 42);
	//printf("%p\n", ptr);
	//printf("%s\n", ft_max_itoa_base((intmax_t)(unsigned long int)ptr, 16));
	ft_printf("%p", &test);
	printf("  %p\n", &test);

	ft_printf("%s", "Purcentrage S");
	printf("  %s\n", "Purcentage S");

	ft_printf("%c", 'C');
	printf("  %c\n", 'C');

	ft_printf("%ld", 2147483648);
	printf("   %ld\n", 2147483648);

	ft_printf("%u", 2147483648);
	printf("   %u\n", 2147483648);

	ft_printf("%li", 2147483648);
	printf("   %li\n", 2147483648);

	ft_printf("%lo", 2147483648);
	printf("   %lo\n", 2147483648);

	ft_printf("%ld", -2147483648);
	printf("   %ld\n", -2147483648);
	return (0);
}
