/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 18:07:15 by cutku             #+#    #+#             */
/*   Updated: 2022/07/31 22:55:15 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	is_space_or_sign(char *str, int *ptr_i)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	*ptr_i = i;
	return (sign);
}

int	base_control(int i, char *base)
{
	int	j;
	int	k;

	k = 0;
	while (k < i -1)
	{
		if (base[k] <= 32 || base[k] > 126)
			return (0);
		j = k + 1;
		while (j < i)
		{
			if ((base[k] == base[j]) || base[k] == '+' || base[k] == '-')
				return (0);
			j++;
		}
		k++;
	}
	return (1);
}

int	ft_index(char c, char *base, int base_num)
{
	int	i;

	i = 0;
	while (i < base_num)
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	result;
	int	base_num;
	int	i;
	int	valid;

	base_num = ft_strlen(base);
	sign = is_space_or_sign(str, &i);
	result = 0;
	if (base_control(base_num, base) == 1 && base_num > 1)
	{	
		valid = 1;
		while (str[i] != '\0' && valid == 1)
		{
			if (ft_index(str[i], base, base_num) != -1)
				result = (result * base_num) + ft_index(str[i], base, base_num);
			else
				valid = 0;
			i++;
		}
	}
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---101010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---539", "0123456789abcdef"));
}
