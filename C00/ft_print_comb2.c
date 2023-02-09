/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 16:09:43 by cutku             #+#    #+#             */
/*   Updated: 2022/07/28 13:45:18 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_num_to_char(int a)
{
	char	print_a;

	print_a = (a / 10) + '0';
	write(1, &print_a, 1);
	print_a = (a % 10) + '0';
	write(1, &print_a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_num_to_char(a);
			write(1, " ", 1);
			ft_num_to_char(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
