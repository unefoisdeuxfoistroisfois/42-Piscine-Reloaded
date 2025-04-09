/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:59:02 by britela-          #+#    #+#             */
/*   Updated: 2025/04/09 20:12:32 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
/*
int main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		i = 1;
		while(i < argc)
		{
			ft_print_params(argv[i]);
			i++;
		}
	}
	return 0;
}*/
