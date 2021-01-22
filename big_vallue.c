/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_vallue.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:40:12 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/23 22:48:36 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "annex.h"

void	print_the_big_big_vallue(int nb)
{
	if (nb == 16)
		ft_putstr("quadrillion");
	if (nb == 19)
		ft_putstr("quintillion");
	if (nb == 22)
		ft_putstr("sextillion");
	if (nb == 25)
		ft_putstr("septillion");
	if (nb == 28)
		ft_putstr("octillion");
	if (nb == 31)
		ft_putstr("nonillion");
	if (nb == 34)
		ft_putstr("decillion");
	if (nb == 37)
		ft_putstr("undecillion");
}

void	print_the_big_vallue(int nb)
{
	if (nb > 13)
		print_the_big_big_vallue(nb);
	if (nb == 3)
		ft_putstr("hundred");
	if (nb == 4)
		ft_putstr("thousand");
	if (nb == 7)
		ft_putstr("million");
	if (nb == 10)
		ft_putstr("billion");
	if (nb == 13)
		ft_putstr("trillion");
}
