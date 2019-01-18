/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:04:49 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/12 14:43:47 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int factorial;

	if (nb < 0 || nb >= 13)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial *= nb;
		nb--;
	}
	return (factorial);
}
