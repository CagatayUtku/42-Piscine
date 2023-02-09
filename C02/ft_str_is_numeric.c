/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:06:15 by cutku             #+#    #+#             */
/*   Updated: 2022/07/30 21:55:56 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
			counter++;
		i++;
	}
	if (counter == i)
		return (1);
	else
		return (0);
}

/* int main (void)
{
	char	str[] = {"0123456789"};
	char	*p;
	int	a;

    p = str;
    a = ft_str_is_numeric(p);
    printf("%d",a);

    return(0);
} */