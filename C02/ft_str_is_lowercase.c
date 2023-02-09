/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 01:09:50 by cutku             #+#    #+#             */
/*   Updated: 2022/07/30 21:56:05 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
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
	char	str[] = {"asdaaz"};
	char	*p;
	int	a;

    p = str;
    a = ft_str_is_lowercase(p);
    printf("%d",a);

    return(0);
} */