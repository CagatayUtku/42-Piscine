/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 01:29:22 by cutku             #+#    #+#             */
/*   Updated: 2022/08/04 03:34:10 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	dest = (int *)malloc((max - min) * sizeof(int));
	if (!dest)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	*range = dest;
	return (i);
}
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = -4;
	max = 50;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}