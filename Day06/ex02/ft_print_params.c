/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 20:54:06 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/16 22:22:38 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	while (--argc)
	{
		while (*argv[i])
			ft_putchar(*argv[i]++);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
