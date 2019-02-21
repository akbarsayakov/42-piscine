/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 17:17:50 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/17 20:12:43 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ptr;
	int *save;

	if (min >= max)
		return (NULL);
	ptr = (int*)malloc(sizeof(int) * (max - min));
	save = ptr;
	while (min < max)
		*ptr++ = min++;
	return (save);
}
