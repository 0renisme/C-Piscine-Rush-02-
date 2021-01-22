/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_the_rest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:26:24 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/23 22:47:14 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annex.h"

void	suite_print_the_rest(char *nb, int i, int j, int len_str)
{
	if (nb[i + 1] == '1')
	{
		ft_putchar(' ');
		print_the_middle_vallue1(nb[i + 2]);
		ft_putchar(' ');
		print_the_big_vallue(len_str - (j + 3));
	}
	if (nb[i + 1] > '1')
	{
		ft_putchar(' ');
		print_the_middle_vallue2a9(nb[i + 1]);
		if (nb[i + 2] > '0')
		{
			ft_putchar(' ');
			print_the_little_vallue(nb[i + 2]);
		}
		if (len_str - (j + 4) > 0)
		{
			ft_putchar(' ');
			print_the_big_vallue(len_str - (j + 3));
		}
	}
}

void	print_the_rest(char *nb, int len_str, int i, int j)
{
	while (i < len_str)
	{
		if (nb[i] > '0')
		{
			ft_putchar(' ');
			print_the_little_vallue(nb[i]);
			ft_putstr(" hundred");
		}
		if (nb[i + 1] == '0')
		{
			if (nb[i + 2] > '0')
			{
				ft_putchar(' ');
				print_the_little_vallue(nb[i + 2]);
				ft_putchar(' ');
				print_the_big_vallue(len_str - (j + 3));
			}
		}
		suite_print_the_rest(nb, i, j, len_str);
		i += 3;
		j += 3;
	}
}
