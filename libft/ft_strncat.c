/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 22:20:00 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 19:19:08 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t				len;
	unsigned int		i;

	i = 0;
	len = ft_strlen(dest);
	while (i < n)
	{
		if (src[i] == '\0')
		{
			dest[len + i] = '\0';
			return (dest);
		}
		else
		{
			dest[len + i] = src[i];
			i++;
		}
	}
	dest[len + i] = '\0';
	return (dest);
}
