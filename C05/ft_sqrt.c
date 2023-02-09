/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:46:00 by cutku             #+#    #+#             */
/*   Updated: 2022/08/03 20:39:37 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	number;

	number = nb;
	if (number <= 0)
		return (0);
	if (number == 1)
		return (1);
	i = 2;
	while (i * i <= number)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%d",ft_sqrt(25));
} */