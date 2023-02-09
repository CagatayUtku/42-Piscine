/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:57:46 by cutku             #+#    #+#             */
/*   Updated: 2022/07/29 10:20:29 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (size > i)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/* int	main(void)
{
	int arr[] = {1,2,3,4,5};
	int *tab;
	tab = arr;
	ft_rev_int_tab(tab,5);
	for(int i = 0;i < 5;i++)
	{
		printf("%d",arr[i]);
	}
	return(0);
} */