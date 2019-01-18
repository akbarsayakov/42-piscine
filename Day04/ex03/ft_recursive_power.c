/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:40:07 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/12 21:36:38 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0 || power >= 31)
		return (0);
	result = nb;
	if (power == 0)
		return (1);
	else
		return (result * (ft_recursive_power(nb, power - 1)));
}
