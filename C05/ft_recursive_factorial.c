/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 01:29:49 by cutku             #+#    #+#             */
/*   Updated: 2022/08/02 22:16:51 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

/* #include <stdio.h>
int main (void)
{
	int number;
	number = ft_recursive_factorial(5);
	printf("%d",number);
} */