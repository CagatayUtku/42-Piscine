/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 22:17:34 by cutku             #+#    #+#             */
/*   Updated: 2022/07/31 00:31:10 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	find_digit_num(int n)
{
	int	counter;

	counter = 0;
	while (n > 9)
	{
		n = n / 10;
		counter++;
	}
	return (counter);
}

int	divider(int n)
{
	int	counter;
	int	divide;
	int	i;

	i = 0;
	divide = 1;
	counter = find_digit_num(n);
	while (i < counter)
	{
		divide *= 10;
		i++;
	}
	return (divide);
}

void	number_to_char(int n)
{
	char	print_n;
	int		divide;

	divide = divider(n);
	while (divide >= 10)
	{
		print_n = n / divide + '0';
		ft_putchar(print_n);
		n -= (n / divide) * divide;
		divide = divide / 10;
	}
	print_n = n + '0';
	ft_putchar(print_n);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putchar('-');
			ft_putchar('2');
			n = 147483648;
			ft_putnbr(n);
		}
		n = -n;
		ft_putchar('-');
		ft_putnbr(n);
	}
	else if (n >= 0 && n < 10)
	{
		n = n + '0';
		ft_putchar (n);
	}
	else
	{
		number_to_char(n);
	}
}
