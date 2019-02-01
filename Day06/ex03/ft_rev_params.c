/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:57:20 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/16 22:19:43 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	while (argc-- > 1)
	{
		while (*argv[argc])
			ft_putchar(*argv[argc]++);
		ft_putchar('\n');
	}
	return (0);
}
