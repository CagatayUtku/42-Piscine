/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:17:27 by cutku             #+#    #+#             */
/*   Updated: 2022/08/03 01:43:14 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb && nb >= 2)
	{
		result *= i;
		i++;
	}
	return (result);
}
/* #include <stdio.h>
int main (void)
{
	int number;
	number = ft_iterative_factorial(1000);
	printf("%d",number);
} */
