/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 23:35:37 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 23:36:02 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	int	nombre;
	int	res;
	
	nombre = 9;
	res = ft_sqrt(nombre);
	
	printf("%d", res);
	return 0;
}*/
