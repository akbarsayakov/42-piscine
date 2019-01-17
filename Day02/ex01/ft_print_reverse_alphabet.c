/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 13:29:04 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/10 14:20:35 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_print_reverse_alphabet(void)
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		ft_putchar(ch--);
	}
}
