/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asayakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:35:31 by asayakov          #+#    #+#             */
/*   Updated: 2019/01/15 19:35:39 by asayakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*start;
	char	*keep;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		start = str;
		keep = to_find;
		while (*keep == *str)
		{
			str++;
			keep++;
		}
		if (*keep == '\0')
			return (start);
		str = start + 1;
	}
	return (0);
}
