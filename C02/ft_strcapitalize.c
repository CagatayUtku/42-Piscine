/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cutku <cutku@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 02:56:49 by cutku             #+#    #+#             */
/*   Updated: 2022/08/02 00:35:04 by cutku            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	capital;

	ft_lowercase(str);
	i = 0;
	capital = 1;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			if (capital == 1)
				str[i] -= 32;
			capital = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			capital = 0;
		else
			capital = 1;
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = {"saLUt, com*mEn(t tu va)s ? 42mots qua[rante-deux; cinquante+et+un"};
	char *p;
	p = str;
	printf("%s \n",ft_strcapitalize(p));

	return(0);
}