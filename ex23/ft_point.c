/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: britela- <britela-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:00:06 by britela-          #+#    #+#             */
/*   Updated: 2025/04/10 15:16:20 by britela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	set_point(&point);
	return (0);
}

