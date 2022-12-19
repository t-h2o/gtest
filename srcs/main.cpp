#include	<iostream>
#include	<gtest/gtest.h>

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

	ASSERT_EQ(6, 7);
}

int	main(void)
{
	test(2, 4);
}
