/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 18:08:42 by britela-          #+#    #+#             */
/*   Updated: 2025/04/09 20:18:08 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (src == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = malloc(sizeof(int) * (i + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/*
int main()
{
	char	*mot;
	char	*res;

	mot = "Bradley";

	
	res = ft_strdup(mot);
	printf("%s", res);
}*/
