#include "../includes/printf.h"

int		main()
{
	int rslt;
	int rslt2;
	int	*test;
	int	*test2;

	test = malloc(sizeof(int));
	test2 = malloc(sizeof(int));
	//printf("%S\n",1.2);
	rslt = printf("Bon%-10cjour%%%nHello\n%-20s\n%- 50d\n",'W', test, "CMON WTF NOW",42);
	rslt2 = ft_printf("Bon%-10cjour%%%nHello\n%-20s\n%- 50d\n",'W', test2, "CMON WTF NOW",42);
	//rslt2 = ft_printf("Bonjour%%%-10sHello\n", "hi");

	printf(" ---- \nprintf : %d\nft_printf : %d\n ----- \n", *test, *test2);
	printf("printf : %d\nft_printf : %d\n ----- \n", rslt, rslt2);
	//printf("%5.6d\n", 8);
	return (0);
}
