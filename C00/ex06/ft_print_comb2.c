/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhumcha <nkhumcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:36:58 by nkhumcha          #+#    #+#             */
/*   Updated: 2022/11/09 16:41:25 by nkhumcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;

	first = -1;
	while (first++ < 98)
	{
		second = first;
		while (second++ < 99)
		{
			ft_putchar(first / 10 + '0');
			ft_putchar(first % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second / 10 + '0');
			ft_putchar(second % 10 + '0');
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}}
