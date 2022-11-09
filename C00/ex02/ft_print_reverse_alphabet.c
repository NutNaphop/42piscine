/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhumcha <nkhumcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:06:55 by nkhumcha          #+#    #+#             */
/*   Updated: 2022/11/09 16:15:02 by nkhumcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		ft_print_putchar(alpha);
		alpha --;
	}
}
