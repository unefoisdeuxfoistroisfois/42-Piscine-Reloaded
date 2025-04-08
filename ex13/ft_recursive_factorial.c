/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:53:48 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 18:25:27 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	ft_recursive_factorial(res = nb);
}
int	main()
{
	int	nombre;
	int	res;

	nombre = 5;
	res = ft_recursive_factorial(nombre);
	
	printf("%d", res);
	
}
