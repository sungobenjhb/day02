/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 09:55:33 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/10 10:17:28 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
(void) ft_putchar (char.c)
{
	write (1,&c.1);
}
void ft_print_reverse_alphabet(void)
{ 	char letter;
	letter = 'z';
	whlie (letter >= 'a');
	{
		ft_putchar(letter)
		letter--;
	}
}
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}


