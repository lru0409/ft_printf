#include "Mandatory/ft_printf.h"
#include <stdio.h>
#include <limits.h>

static void print_char_test();
static void print_str_test();
static void print_ptr_test();
static void print_decimal_nbr_test();
static void print_hexa_nbr_test();
static void print_percentage_test();
static void print_mix_test();

int	main(void)
{
	print_char_test();
	print_str_test();
	print_ptr_test();
	print_decimal_nbr_test();
	print_hexa_nbr_test();
	print_percentage_test();
	print_mix_test();
	return (0);
}

static void print_char_test()
{
	printf("---------- %%c ----------\n");
	printf("  printf: %d\n", printf("%c", 'a'));
	printf("  ft_printf: %d\n\n", ft_printf("%c", 'a'));
}

static void print_str_test()
{
	printf("---------- %%s ----------\n");
	printf("  printf: %d\n", printf("%s", "Hello, world!"));
	printf("  ft_printf: %d\n\n", ft_printf("%s", "Hello, world!"));
}

static void print_ptr_test()
{
	printf("---------- %%p ----------\n");
	char	str[] = "Hello, world!";
	printf("  printf: %d\n", printf("%p", str));
	printf("  ft_printf: %d\n\n", ft_printf("%p", str));
	printf("  printf: %d\n", printf("%p", NULL));
	printf("  ft_printf: %d\n\n", ft_printf("%p", NULL));
}

static void print_decimal_nbr_test()
{
	printf("---------- %%d ----------\n");
	printf("  printf: %d\n", printf("%d", -1234));
	printf("  ft_printf: %d\n\n", ft_printf("%d", -1234));
	printf("  printf: %d\n", printf("%d", 0));
	printf("  ft_printf: %d\n\n", ft_printf("%d", 0));
	printf("  printf: %d\n", printf("%d", 1234));
	printf("  ft_printf: %d\n\n", ft_printf("%d", 1234));
	printf("  printf: %d\n", printf("%d", INT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%d", INT_MAX));
	printf("  printf: %d\n", printf("%d", INT_MIN));
	printf("  ft_printf: %d\n\n", ft_printf("%d", INT_MIN));

	printf("---------- %%i ----------\n");
	printf("  printf: %d\n", printf("%i", -1234));
	printf("  ft_printf: %d\n\n", ft_printf("%i", -1234));
	printf("  printf: %d\n", printf("%i", 0));
	printf("  ft_printf: %d\n\n", ft_printf("%i", 0));
	printf("  printf: %d\n", printf("%i", 1234));
	printf("  ft_printf: %d\n\n", ft_printf("%i", 1234));
	printf("  printf: %d\n", printf("%i", INT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%i", INT_MAX));
	printf("  printf: %d\n", printf("%i", INT_MIN));
	printf("  ft_printf: %d\n\n", ft_printf("%i", INT_MIN));

	printf("---------- %%u ----------\n");
	printf("  printf: %d\n", printf("%u", -1234));
	printf("  ft_printf: %d\n\n", ft_printf("%u", -1234));
	printf("  printf: %d\n", printf("%u", 0));
	printf("  ft_printf: %d\n\n", ft_printf("%u", 0));
	printf("  printf: %d\n", printf("%u", 1234));
	printf("  ft_printf: %d\n\n", ft_printf("%u", 1234));
	printf("  printf: %d\n", printf("%u", UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%u", UINT_MAX));
	printf("  printf: %d\n", printf("%u", -UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%u", -UINT_MAX));
}

static void print_hexa_nbr_test()
{
	printf("---------- %%x ----------\n");
	printf("  printf: %d\n", printf("%x", -1234));
	printf("  ft_printf: %d\n\n", ft_printf("%x", -1234));
	printf("  printf: %d\n", printf("%x", 0));
	printf("  ft_printf: %d\n\n", ft_printf("%x", 0));
	printf("  printf: %d\n", printf("%x", 123456789));
	printf("  ft_printf: %d\n\n", ft_printf("%x", 123456789));
	printf("  printf: %d\n", printf("%x", UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%x", UINT_MAX));
	printf("  printf: %d\n", printf("%x", -UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%x", -UINT_MAX));

	printf("---------- %%X ----------\n");
	printf("  printf: %d\n", printf("%X", -123456789));
	printf("  ft_printf: %d\n\n", ft_printf("%X", -123456789));
	printf("  printf: %d\n", printf("%X", 0));
	printf("  ft_printf: %d\n\n", ft_printf("%X", 0));
	printf("  printf: %d\n", printf("%X", 123456789));
	printf("  ft_printf: %d\n\n", ft_printf("%X", 123456789));
	printf("  printf: %d\n", printf("%X", UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%X", UINT_MAX));
	printf("  printf: %d\n", printf("%X", -UINT_MAX));
	printf("  ft_printf: %d\n\n", ft_printf("%X", -UINT_MAX));
}

static void print_percentage_test()
{
	printf("---------- %%%% ----------\n");
	printf("  printf: %d\n", printf("%% %% %%"));
	printf("  ft_printf: %d\n\n", ft_printf("%% %% %%"));
}

static void print_mix_test()
{
	printf("---------- MIX ----------\n");
	printf("printf: %d\n", printf("ID: %s, Blood Type: %c, \
		age(%%d): %d, age(%%x): %x\n", "rolee", 'o', 19, 19));
	printf("ft_printf: %d\n\n", ft_printf("ID: %s, Blood Type: %c, \
		age(%%d): %d, age(%%x): %x\n", "rolee", 'o', 19, 19));
}
