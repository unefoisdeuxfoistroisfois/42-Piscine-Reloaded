/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:40:34 by britela-          #+#    #+#             */
/*   Updated: 2025/04/11 16:12:59 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void	ft_putnbr(int	n)
{
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(1,&n,1);
		
	}
}
int	main()
{
	int	tab[] = {1,2,3,4,5};
	int	size;

	size = 5;
	ft_foreach(tab, size, &ft_putnbr);

	return (0);
}*/
