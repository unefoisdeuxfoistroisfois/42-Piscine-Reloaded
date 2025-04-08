/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:08:09 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 17:10:11 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int	nombre;
	int	nombre2;

	nombre = 6;
	nombre2 = 5;

	ft_swap(&nombre, &nombre2);
	if(nombre == 5 && nombre2 == 6)
	{
		write(1,"OK",2);
	}
	else
	{
		write(1,"Pas OK",6);
	}
}*/
