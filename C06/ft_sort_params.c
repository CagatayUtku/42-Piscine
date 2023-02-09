/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 23:06:20 by cutku             #+#    #+#             */
/*   Updated: 2022/08/04 02:57:36 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	sort_array(char **argv, int size)
{
	int		i;
	int		j;
	int		min;

	i = 1;
	while (i < size -1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
				min = j;
			j++;
		}
		ft_swap(&argv[i], &argv[min]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	sort_array(argv, argc);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
