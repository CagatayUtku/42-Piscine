/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 19:38:13 by cutku             #+#    #+#             */
/*   Updated: 2022/08/03 16:58:23 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa(char a)
{
	char	print_a;
	char	print_b;

	print_a = "0123456789abcdef"[a / 16];
	print_b = "0123456789abcdef"[a % 16];
	write(1, "\\", 1);
	write(1, &print_a, 1);
	write(1, &print_b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_print_hexa(str[i]);
		i++;
	}
}
/* 
int	main(void)
{
	char	str[] = "Coucou\ntu\tvas --bien ?";

	ft_putstr_non_printable(str);
	return (0);
}
 */