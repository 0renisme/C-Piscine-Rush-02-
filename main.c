/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 19:35:29 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/23 22:46:28 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annex.h"
#include <unistd.h>

int		is_a_valide_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j] == '0')
		j++;
	while (str[i + j])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	if (j > 0 && i == 0)
		return (-1);
	if (j > 0 && i > 0)
		return (0);
	if (i > 37)
		return (0);
	return (i);
}

void	where_should_i_go(int len_str, char *nb, int i)
{
	if (len_str >= 3)
	{
		if (len_str % 3 == 1)
			premiercas(nb, len_str);
		if (len_str % 3 == 2)
			deuxiemecas(nb, len_str);
		if (len_str % 3 == 0)
			troisiemecas(nb, len_str);
	}
	if (len_str == 2)
	{
		if (nb[i] == '1')
			print_the_middle_vallue1(nb[i + 1]);
		if (nb[i] > '1')
		{
			print_the_middle_vallue2a9(nb[i]);
			if (nb[i + 1] > '0')
			{
				ft_putchar(' ');
				print_the_little_vallue(nb[i + 1]);
			}
		}
	}
	if (len_str == 1)
		print_the_little_vallue(nb[i]);
}

int		main(int ac, char **av)
{
	int len_str;
	int i;

	i = 0;
	if (ac > 3 || ac < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	len_str = is_a_valide_str(av[1]);
	if (len_str == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (len_str == -1)
	{
		print_the_little_vallue('0');
		return (0);
	}
	if (ac == 2)
		where_should_i_go(len_str, av[1], i);
	if (ac == 3)
		where_should_i_go(len_str, av[2], i);
	return (0);
}
