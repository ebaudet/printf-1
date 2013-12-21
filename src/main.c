#include "../includes/printf.h"

int		main()
{
	int rslt;
	int rslt2;
	int	*test;
	int	*test2;
	char	*testnullstr;
	unsigned int n;

	n = 4294967295;
	testnullstr = NULL;

	test = malloc(sizeof(int));
	test2 = malloc(sizeof(int));
	//printf("%S\n",1.2);
	rslt = printf("%#X\n%#x\n%#o\n%u\n%ls\n%CBon%-10cjour%s%%%nHello\n%-20s\n%- 50d\n",
			1323532, n, n, n, L"Test Long string", (wint_t)'C', 'W', testnullstr, test, "CMON WTF NOW",42);
	rslt2 = ft_printf("%#X\n%#x\n%#o\n%u\n%ls\n%CBon%-10cjour%s%%%nHello\n%-20s\n%- 50i\n",
			1323532, n, n, n, L"Test Long string", (wint_t)'C', 'W', testnullstr, test2, "CMON WTF NOW",42);
	//rslt2 = ft_printf("Bonjour%%%-10sHello\n", "hi");

	printf(" ---- \nprintf : %d\nft_printf : %d\n ----- \n", *test, *test2);
	printf("printf : %d\nft_printf : %d\n ----- \n", rslt, rslt2);
	//printf("%5.6d\n", 8);
	return (0);
}
