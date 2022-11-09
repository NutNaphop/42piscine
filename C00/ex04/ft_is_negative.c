/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhumcha <nkhumcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:11:07 by nkhumcha          #+#    #+#             */
/*   Updated: 2022/11/09 16:39:23 by nkhumcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int a)
{
	if (a < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

