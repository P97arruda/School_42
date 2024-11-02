/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p97arruda <pliniodev97@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:33:22 by p97arruda         #+#    #+#             */
/*   Updated: 2024/11/02 18:33:23 by p97arruda        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write (1, &letter, 1);
		letter++;
	}
}
/*
#include <stdio.h>
	int main(void)
	{
		ft_print_alphabet();
		write(1, "\n", 1);
		return(0);
	}
*/
