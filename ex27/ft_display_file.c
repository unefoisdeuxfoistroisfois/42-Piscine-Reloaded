/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:56:27 by britela-          #+#    #+#             */
/*   Updated: 2025/04/13 19:56:24 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		f;
	char	lettre;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		f = open(argv[1], O_RDONLY);
		if (f == -1)
		{
			ft_putstr("Error opening file.\n");
			return (1);
		}
		else
		{
			while (read(f, &lettre, 1) > 0)
				ft_putchar(lettre);
			close(f);
		}
	}
	return (0);
}
