/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:39:29 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/09 13:53:09 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar (char c) 
{
	write (1,&c,1);
}
void ft_print_alphabet (void)
{
	char letter;
	letter = 'a';
	while (letter <= 'z')
	{	
		ft_putchar(letter);
		letter++;
	}
}
