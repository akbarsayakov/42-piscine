/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 18:09:07 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/10 21:29:13 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0' - 1;
	while (++a <= '7')
	{
		b = a;
		while (++b <= '8')
		{
			c = b;
			while (++c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!(a == '7' && b == '8' && c == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
