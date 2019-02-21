/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 16:19:36 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/17 17:16:18 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*dup;
	int		len;

	len = 0;
	while (src[len])
		len++;
	ptr = (char*)malloc(sizeof(*src) * (len + 1));
	dup = ptr;
	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dup);
}
