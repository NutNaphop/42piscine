/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhumcha <nkhumcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:11:07 by nkhumcha          #+#    #+#             */
/*   Updated: 2022/11/09 13:17:07 by nkhumcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int a)
{
	if (a < 0)
	{
		printf("N");
	}
	else
	{
		printf("P");
	}
}

int	main(void)
{
	ft_is_negative(-5);
}
