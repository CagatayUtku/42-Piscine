/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:22:23 by cutku             #+#    #+#             */
/*   Updated: 2022/08/04 20:20:27 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = ft_strlen(src);
	dest = (char *)malloc(len * sizeof(char) + 1);
	i = 0;
	if (!dest)
		return (0);
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*ptr;
	int					i;

	ptr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!ptr)
		return (0);
	i = 0;
	while (i < ac)
	{
		ptr[i].size = ft_strlen(av[i]);
		ptr[i].str = av[i];
		ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	ptr[i].str = 0;
	return (ptr);
}

/* #include <stdio.h>
int main(int argc, char **argv)
{
	t_stock_str *stock = ft_strs_to_tab(argc, argv);
	for (int i = 0; i < argc + 1; i++)
	{
		printf("%i %p %s ", stock[i].size, &stock[i].str, stock[i].str);
		printf("%p %s\n", &stock[i].copy, stock[i].copy);
	}
} */