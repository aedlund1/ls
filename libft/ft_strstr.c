/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 13:29:29 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 19:19:08 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char			*hayst;
	unsigned int	i;

	hayst = (char *)haystack;
	if (ft_strlen(needle) == 0)
		return (hayst);
	while (*hayst != '\0')
	{
		i = 0;
		while (needle[i] == hayst[i])
		{
			i++;
			if (needle[i] == '\0')
				return (hayst);
		}
		hayst++;
	}
	return (NULL);
}
