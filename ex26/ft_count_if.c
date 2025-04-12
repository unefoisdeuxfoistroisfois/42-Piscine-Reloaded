/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:14:13 by britela-          #+#    #+#             */
/*   Updated: 2025/04/11 20:57:53 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	j;
	int	count;

	if (tab == NULL)
	{
		return (0);
	}
	count = 0;
	i = 0;
	while (tab[i] != NULL)
	{
		j = 0;
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}
/*
int	verif_char(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == '1')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int main()
{
	char	*tab[] = {"sa1lut", "1", "le", "1", NULL};
	int	res;
	
	res = ft_count_if(tab, &verif_char); // fonction
	printf("%d", res);
}*/
