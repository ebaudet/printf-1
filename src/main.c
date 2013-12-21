#include "../includes/printf.h"

int		main()
{
	int rslt;
	int rslt2;
	int	*test;
	int	*test2;
	char	*testnullstr;
	unsigned int n;
	long unsigned int p;
	char	*test3;

	test3 = (char*)malloc(1);

	n = 4294967295;
	p = 35251251416;
	testnullstr = NULL;

	test = malloc(sizeof(int));
	test2 = malloc(sizeof(int));
	//printf("%S\n",1.2);
	rslt = printf("----\n#lx : %#lx\np : %p\nX : %#X\nx : %#x\no : %#o\nu : %u\nS ls : %ls\nC : %C\nc s %% : Bon%-10cjour%s%%%nHello\ns : %-20s\nd : %- 50d\n----\n",
			p, test3, 1323532, n, n, n, L"Test Long string", (wint_t)'C', 'W',
			testnullstr, test, "CMON WTF NOW",42);
	rslt2 = ft_printf("----\n#lx : %#lx\np : %p\nX : %#X\nx : %#x\no : %#o\nu : %u\nS ls : %ls\nC : %C\nc s %% : Bon%-10cjour%s%%%nHello\ns : %-20s\nd : %- 50d\n----\n",
			p, test3, 1323532, n, n, n, L"Test Long string", (wint_t)'C',
			'W', testnullstr, test2, "CMON WTF NOW",42);
	//rslt2 = ft_printf("Bonjour%%%-10sHello\n", "hi");

	printf(" ---- \nprintf : %d\nft_printf : %d\n ----- \n", *test, *test2);
	printf("printf : %d\nft_printf : %d\n ----- \n", rslt, rslt2);
	//printf("%5.6d\n", 8);
	return (0);
}
