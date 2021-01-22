/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulo3egale0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:05:48 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/23 22:14:10 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annex.h"

void	suite_troisieme_cas(char *nb, int i, int len_str, int j)
{
	if (nb[i + 1] == '0')
	{
		if (nb[i + 2] > '0')
		{
			ft_putchar(' ');
			print_the_little_vallue(nb[i + 2]);
		}
	}
	ft_putchar(' ');
	print_the_big_vallue(len_str - j);
	i += 3;
	print_the_rest(nb, len_str, i, j);
}

void	troisiemecas(char *nb, int len_str)
{
	int i;
	int j;

	i = 0;
	j = 2;
	print_the_little_vallue(nb[i]);
	ft_putstr(" hundred");
	if (nb[i + 1] == '1')
	{
		ft_putchar(' ');
		print_the_middle_vallue1(nb[i + 2]);
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
	}
	suite_troisieme_cas(nb, i, len_str, j);
}

void	deuxiemecas(char *nb, int len_str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (nb[i] == '1')
	{
		print_the_middle_vallue1(nb[i + 1]);
		ft_putchar(' ');
		print_the_big_vallue(len_str - j);
	}
	if (nb[i] > '1')
	{
		print_the_middle_vallue2a9(nb[i]);
		ft_putchar(' ');
		print_the_little_vallue(nb[i + 1]);
		ft_putchar(' ');
		print_the_big_vallue(len_str - j);
	}
	i += 2;
	print_the_rest(nb, len_str, i, j);
}

void	premiercas(char *nb, int len_str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (nb[i] > '0')
	{
		print_the_little_vallue(nb[i]);
		ft_putchar(' ');
		print_the_big_vallue(len_str);
	}
	i++;
	print_the_rest(nb, len_str, i, j);
}
