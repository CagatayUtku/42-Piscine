/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:54:40 by cutku             #+#    #+#             */
/*   Updated: 2022/07/30 21:55:47 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			counter++;
		else if (str[i] <= 'Z' && str[i] >= 'A')
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
	char	str[] = {"ZAfQz a"};
	char	*p;
	int	a;

    p = str;
    a = ft_str_is_alpha(p);
    printf("%d",a);

    return(0);
} */