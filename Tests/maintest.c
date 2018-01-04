#include "../includes/ft_printf.h"

int		main(int argc, char **argv)
{
	(void)argv;
	(void)argc;
	//t_arg	arg;
	//arg = get_struct(ft_strdup(argv[1]));
	//printf("%c %d %d %c %c\n", arg.att, arg.width, arg.pre, arg.flag, arg.spe);
	//printf("%d");
	ft_printf("Salut %#53.11cc'est le test %d!\n", 'a', 42);
	return (0);
}
