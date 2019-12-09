/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 11:25:22 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 19:22:54 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;

	result = (char *)s;
	if (!result)
		return (NULL);
	while (*result != '\0')
	{
		if ((int)*result == c)
			return (result);
		result++;
		if ((int)*result == c)
			return (result);
	}
	return (NULL);
}
