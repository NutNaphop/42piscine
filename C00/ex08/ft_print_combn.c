/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhumcha <nkhumcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:14:21 by nkhumcha          #+#    #+#             */
/*   Updated: 2022/11/09 22:45:29 by nkhumcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_output(int n, int *ar, int pos)
{
	int	i;

	i = 0;
	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < n)
	{
		ft_putchar(ar[i] + '0');
		i ++;
	}
}

void	ft_moutput(int n, int *ar)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (ar[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	ar[i] += 1;
	while (i < n)
	{
		ar[i + 1] = ar[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int	ar [10];
	int	i;

	i = 0;	
	while (i < n)
	{
		ar[i] = i;
		i += 1;
	}
	ft_output(n, ar, 0);
	while (ar[0] != 10 - n || ar[n - 1] != 9)
	{
		if (ar[n - 1] != 9)
		{
			ar[n - 1] += 1;	
		}
		else
		{
			ft_moutput(n, ar);
		}
		ft_output(n, ar, 1);
	}
}

int	main(void)
{
	ft_print_combn(2);
}
