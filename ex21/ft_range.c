/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:30:57 by britela-          #+#    #+#             */
/*   Updated: 2025/04/09 18:52:03 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	str = malloc(sizeof(int) * (max - min));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		str[i] = min;
		min++;
		i++;
	}
	return (str);
}
/*
int main()
{
	int	min;
	int	max;
	int	*res;

	min = 3;
	max = 9;

	res = ft_range(min, max);
	
	int	i;

	i = 0;
	while(i != (max - min))
	{
		printf("%d", res[i]);
		i++;
	}
}*/
