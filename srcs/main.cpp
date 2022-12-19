#include	<iostream>

static int	ft_sum(int a, int b)
{
	return a + b;
}

static void	test(int a, int b)
{
	int result;

	result = ft_sum(a, b);

	std::cout
		<< a
		<< " + "
		<< b
		<< " = "
		<< result
		<< std::endl;

}

int	main(void)
{
	test(2, 4);
}
