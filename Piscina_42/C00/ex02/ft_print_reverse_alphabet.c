/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p97arruda <pliniodev97@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:19:24 by p97arruda         #+#    #+#             */
/*   Updated: 2024/11/04 17:19:25 by p97arruda        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
