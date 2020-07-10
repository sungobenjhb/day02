/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 12:19:04 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/10 12:46:16 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar (char c)
{	
	write (1,&c,1);
}
void ft_print_numbers (void) 
{
	char num;
	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}	
}
int main()
{
	ft_print_numbers();
	return 0;
}

		

