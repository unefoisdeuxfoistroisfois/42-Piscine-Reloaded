/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:29:34 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 23:22:29 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	somme;

	i = 1;
	somme = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		somme = somme * i;
		i++;
	}
	return (somme);
}
/*
int main()
{
	int	nombre;
	int	res;

	nombre = 5;
	
	res = ft_iterative_factorial(nombre);

	printf("%d",res);
	return 0;
}*/
