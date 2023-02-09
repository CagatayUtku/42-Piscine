/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:04:36 by cutku             #+#    #+#             */
/*   Updated: 2022/08/01 23:28:11 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
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

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	valid;

	i = ft_strlen(base);
	valid = base_control(i, base);
	if (i > 1 && valid == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= i)
		{
			ft_putnbr_base(nbr / i, base);
			ft_putnbr_base(nbr % i, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}

int	main(void)
{
	ft_putnbr_base(-15, "jklmno");
	printf("\n");
	ft_putnbr_base(-25, "poneyvif");
	printf("\n");
	ft_putnbr_base(94867111, "0123456789");
	printf("\n");
	ft_putnbr_base(450, "0123456789abcdef");
}