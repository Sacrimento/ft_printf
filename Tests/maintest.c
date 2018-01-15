#include <locale.h>
#include "../includes/ft_printf.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	// char	test = 0;
	// char	*ptr = &test;
	// int		test2 = 42;
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
    //
	// printf("Unix : {%0-3d}\n", 0); fflush(stdout);
	// ft_printf("42   : {%0-3d}\n", 0);
    //
	// printf("Unix : %15.4d\n", -400); fflush(stdout);
	// ft_printf("42   : %15.4d\n", -400);

	//printf("Test : %*.*d", -32,-10, 10);
// ft_printf("\n");
//   ft_printf("%%\n");
//   ft_printf("%d\n", 42);
//   ft_printf("%d%d\n", 42, 41);
//   ft_printf("%d%d%d\n", 42, 43, 44);
//   ft_printf("%ld\n", 2147483647);
//   ft_printf("%lld\n", 9223372036854775807);
//   ft_printf("%x\n", 505);
//   ft_printf("%X\n", 505);
//   ft_printf("%p\n", &ft_printf);
//   ft_printf("%20.15d\n", 54321);
//   ft_printf("%-10d\n", 3);
//   ft_printf("% d\n", 3);
//   ft_printf("%+d\n", 3);
//   ft_printf("%010d\n", 1);
//   ft_printf("%hhd\n", 0);
//   ft_printf("%jd\n", 9223372036854775807);
//   ft_printf("%zd\n", 4294967295);
//   ft_printf("%\n");
//   ft_printf("%U\n", 4294967295);
//   ft_printf("%u\n", 4294967295);
//   ft_printf("%o\n", 40);
//   ft_printf("%%#08x\n", 42);
//   ft_printf("%x\n", 1000);
//   ft_printf("%#X\n", 1000);
//   ft_printf("%s\n", 0);
//   ft_printf("%S\n", L"ݗݜशব");
//   ft_printf("%s%s\n", "test", "test");
//   ft_printf("%s%s%s\n", "test", "test", "test");
//   ft_printf("%C\n", 15000);
/*
  ft_printf("\n");
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%ld\n", l);
  ft_printf("%lld\n", ll);
  ft_printf("%x %X %p %20.15d\n", 505, 505, &ll, 54321);
  ft_printf("%-10d % d %+d %010d %hhd\n", 3, 3, 3, 1, c);
  ft_printf("%jd %zd %u %o %#08x\n", im, (size_t)i, i, 40, 42);
  ft_printf("%x %#X %S %s%s\n", 1000, 1000, L"ݗݜशব", "test", "test2");
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("%C\n", 15000);
  ft_printf("%s%s%s%s%s",
  		"1", "2", "3", "4", "5");
		ft_printf("111%s333%s555", "222", "444");
		ft_printf("111%s333%s555%saaa%sccc",
		"222", "444", "666", "bbb");
		printf("%d", 42);

ft_printf("%d", -42);
ft_printf("before %d after", 42);
ft_printf("%d%d%d%d%d",
		1, -2, 3, -4, 5);
		printf("%s%s%s%s%s",
		"1", "2", "3", "4", "5");
ft_printf("a%db%dc%dd",
-2, 3);
ft_printf("%d", INT_MAX);
ft_printf("%d", INT_MIN);
*/
//ft_printf("%.3as", ft_strsplit("loli,lola,lolu,lalala", ','));


	// printf("--------------------------\n");
    //
	// printf("Unix : [%#.o]\n", 42); fflush(stdout);
	// ft_printf("42   : [%#.o]\n", 42);

	// // ft_printf("42   [% Zoooo]\n");
	// ft_printf("moi @moulitest: %#.o %#.0o\n", 0, 0);
	// printf("lui @moulitest: %#.o %#.0o\n", 0, 0);
	// ft_putnbr(printf("%.50d\n", 2147483647));
	// ft_putnbr(ft_printf("%.50d\n", 2147483647));

printf("{red}Salut {white}salut je {yellow}m'amuse trop\n");


	//ft_printf("[%*p]\n", 10, 0);

	return (0);
}
