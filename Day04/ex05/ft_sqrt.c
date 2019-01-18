/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 21:02:16 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/12 21:28:24 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int n;

	n = 1;
	while (n * n <= nb)
	{
		if (n * n == nb)
			return (n);
		else
			n++;
	}
	return (0);
}