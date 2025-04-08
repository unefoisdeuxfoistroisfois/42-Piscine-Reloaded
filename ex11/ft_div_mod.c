/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:15:45 by britela-          #+#    #+#             */
/*   Updated: 2025/04/08 17:19:39 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int	nombre;
	int	nombre2;
	int	d;
	int	mod;

	nombre = 5;
	nombre = 3;
	d = 2;
	modulo = 3;

	ft_div_mod(nombre, nombre2, d, modulo);


}
