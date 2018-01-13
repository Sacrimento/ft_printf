#include <locale.h>
#include "../includes/ft_printf.h"

int		main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	char	test = 0;
	char	*ptr = &test;
	int		test2 = 42;
	setlocale(LC_ALL,"");
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

	// ft_printf("Moi %03.2d\n", -1);
	   // printf("Unix [% Zoooo]\n");
	// printf("%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S%S",
	// L"Α α", L"Β β", L"Γ γ", L"Δ δ", L"Ε ε", L"Ζ ζ", L"Η η", L"Θ θ", L"Ι ι", L"Κ κ", L"Λ λ", L"Μ μ",
	// L"Ν ν", L"Ξ ξ", L"Ο ο", L"Π π", L"Ρ ρ", L"Σ σ", L"Τ τ", L"Υ υ", L"Φ φ", L"Χ χ", L"Ψ ψ", L"Ω ω", L"");

	// printf("{%10R}\n");
	// ft_printf("{%10R}\n");



	// printf("------------------------------------\n");
    //
	// printf("LUI RET : %d\n", printf("{%30S}\n", L"我是一只猫。"));
	// printf("MOI RET : %d\n", ft_printf("{%30S}\n", L"我是一只猫。"));
    //
	// printf("------------------------------------\n");
    //
	// printf("LUI RET : %d\n", printf("{%-30S}\n", L"我是一只猫。"));
	// printf("MOI RET : %d\n", ft_printf("{%-30S}\n", L"我是一只猫。"));

	printf("Unix : {%#.5x}\n", 1); fflush(stdout);
	ft_printf("42   : {%#.5x}\n", 1);

	// printf("--------------------------\n");
    //
	// printf("Unix : [%#.o]\n", 42); fflush(stdout);
	// ft_printf("42   : [%#.o]\n", 42);

	// // ft_printf("42   [% Zoooo]\n");
	// ft_printf("moi @moulitest: %#.o %#.0o\n", 0, 0);
	// printf("lui @moulitest: %#.o %#.0o\n", 0, 0);
	// ft_putnbr(printf("%.50d\n", 2147483647));
	// ft_putnbr(ft_printf("%.50d\n", 2147483647));
	return (0);
}
