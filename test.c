#include "ft_printf.h"
int	main()
{
	int	count;

	printf("\n%%c test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%c", 'c');
	printf("\n%d character(s)\n", count);
	printf("\nPrintf result\n");
	count = 0;
	count = printf("%c", 'c');
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\nSimple string test\n\n");
	printf("\nMy result\n");
	count = ft_printf("Simple text");
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count = printf("Simple text");
	printf("\n%d character(s)\n", count); 
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%s test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%s test", "This is a string");
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count = printf("%s test", "This is a string");
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%d and %%i test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%d | %i | %d", 4445611, -45663, 0);
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count = printf("%d | %i | %d", 4445611, -45663, 0);
	printf("\n%d character(s)\n", count);

	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%u test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%u | %u | %u", 4294967295, -1, 0);
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count = printf("%u | %u | %u", 4294967295U, -1, 0);
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%%% test\n\n");
	printf("\nMy result\n");
	count = ft_printf("This is 100%% better than before");
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count = printf("This is 100%% better than before");
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%X test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%X | %X | %X", 4294967295, 0, 53456);
	printf("\n%d character(s)\n", count);
	count = 0;
	printf("\nPrintf result\n");
	count= printf("%X | %X | %X", 4294967295U, 0, 53456);
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\n%%x test\n\n");
	printf("\nMy result\n");
	count = ft_printf("%x | %x | %x", 4294967295, 0, 534516);
	printf("\n%d character(s)\n", count);
	printf("\nPrintf result\n");
	count = 0;
	count = printf("%x | %x | %x", 4294967295U, 0, 534516);
	printf("\n%d character(s)\n", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	char *a = "PLs work";
	printf("\n%%p test\n");
	printf("\nMy result\n");
	count = ft_printf("%p", &a);
	printf("\n%d character(s)", count);
	printf("\n\nPrintf result\n");
	count = printf("%p", &a);
	printf("\n%d character(s)", count);
	ft_printf("\n");

	printf("\n--------------------------------------------\n");
	printf("\nSome edge cases\n\n");
	count = ft_printf("Sign%\0 at the end%");
	ft_printf("\n%d character(s)\n\n", count);
	// count = printf("Sign%\0 at the end%");
	// printf("\n%d character(s)\n\n", count);
	count = ft_printf("Null terminator in th\0e middle of string");
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("3 signs in a row %%% gdfgjdsg");
	printf("\n%d character(s)\n\n", count);
	// count = printf("3 signs in a row %%%");
	// printf("\n%d character(s)\n\n", count);
	count = ft_printf("\n%%%%%%%c%%%%%%%d", 'a', 3);
	printf("\n%d character(s)\n\n", count);
	count = printf("\n%%%%%%%c%%%%%%%d", 'a', 3);
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("\n%%%%%%%w%%%%%%%a");
	printf("\n%d character(s)\n\n", count);
	// count = printf("\n%%%%%%%w%%%%%%%");
	// printf("\n%d character(s)\n\n", count);
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("%");
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("% ");
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("%d %s %c", 42, "hello", 'A');
	printf("\n%d character(s)\n\n", count);
	count = ft_printf("%q");
	printf("\n%d character(s)\n\n", count);

	return 0;
	// com ft_printf.c print_pointer.c libft/ft_putstr_fd.c libft/ft_strlen.c 
	// libft/ft_putnbr_fd.c libft/ft_putchar_fd.c print_hexlow.c 
	// print_hexup.c print_str.c print_digi.c print_unint.c print_percent.c 
	// print_char.c
}