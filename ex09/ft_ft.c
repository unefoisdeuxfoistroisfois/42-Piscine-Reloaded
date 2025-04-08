/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:02:54 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 16:24:19 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int	nombre;

	nombre = 9;
	ft_ft(&nombre);

	if(nombre == 42)
	{
		write(1,"OK", 2);
	}
	else
	{
		write(1,"PAS OK", 6);
	}
	return 0;
}
