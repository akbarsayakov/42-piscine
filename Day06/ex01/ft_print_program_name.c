/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 20:21:37 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/16 20:57:31 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	if (argc > 0)
	{
		while (*argv[0])
			ft_putchar(*argv[0]++);
		ft_putchar('\n');
	}
	return (0);
}
