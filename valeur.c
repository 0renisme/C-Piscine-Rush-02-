/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valeur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orfreoua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:06:02 by orfreoua          #+#    #+#             */
/*   Updated: 2020/02/23 22:45:56 by orfreoua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "annex.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	print_the_little_vallue(char nb)
{
	if (nb == '0')
		ft_putstr("zero");
	if (nb == '1')
		ft_putstr("one");
	if (nb == '2')
		ft_putstr("two");
	if (nb == '3')
		ft_putstr("three");
	if (nb == '4')
		ft_putstr("four");
	if (nb == '5')
		ft_putstr("five");
	if (nb == '6')
		ft_putstr("six");
	if (nb == '7')
		ft_putstr("seven");
	if (nb == '8')
		ft_putstr("eight");
	if (nb == '9')
		ft_putstr("nine");
}

void	print_the_middle_vallue1(char nb)
{
	if (nb == '0')
		ft_putstr("ten");
	if (nb == '1')
		ft_putstr("eleven");
	if (nb == '2')
		ft_putstr("twelve");
	if (nb == '3')
		ft_putstr("thirteen");
	if (nb == '4')
		ft_putstr("fourteen");
	if (nb == '5')
		ft_putstr("fifteen");
	if (nb == '6')
		ft_putstr("sixteen");
	if (nb == '7')
		ft_putstr("seventeen");
	if (nb == '8')
		ft_putstr("eighteen");
	if (nb == '9')
		ft_putstr("nineteen");
}

void	print_the_middle_vallue2a9(char nb)
{
	if (nb == '2')
		ft_putstr("twenty");
	if (nb == '3')
		ft_putstr("thirty");
	if (nb == '4')
		ft_putstr("forty");
	if (nb == '5')
		ft_putstr("fifty");
	if (nb == '6')
		ft_putstr("sixty");
	if (nb == '7')
		ft_putstr("seventy");
	if (nb == '8')
		ft_putstr("eighty");
	if (nb == '9')
		ft_putstr("ninety");
}
