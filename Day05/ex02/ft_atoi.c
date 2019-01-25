/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:52:35 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/14 23:40:44 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int val;

	val = 0;
	sign = 1;
	while (*str)
	{
		if (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
				|| *str == '\r' || *str == ' ' || *str == '+')
		{
			str++;
			continue;
		}
		if (*str == '-')
		{
			sign = -1;
			str++;
		}
		if (*str <= '9' && *str >= '0')
			val = val * 10 + *str - '0';
		else
			break ;
		str++;
	}
	return (sign * val);
}
