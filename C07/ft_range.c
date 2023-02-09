/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 22:17:50 by cutku             #+#    #+#             */
/*   Updated: 2022/08/04 03:38:21 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *dest;
	int	i;

	dest = (int *)malloc((max - min) * sizeof(int));
	if (max <= min)
		return (0);
	i = 0;
	while (min + i < max)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

#include <stdio.h>
int main()
{
	int i;
	int *dest;

	i = 0;
	dest = ft_range(0, 20);
	while(i < 20)
	{
		printf("%d", dest[i]);
		i++;
	}
	return (0);
}
 