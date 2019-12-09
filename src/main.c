/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:12:46 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 23:10:13 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_ls.h"

void	ls_a(DIR *dirp, int bool)
{
	struct dirent	*r_dirp;

	while ((r_dirp = readdir(dirp)))
	{
		r_dirp->d_name[0] == '.' ? (bool == 1 ? ft_putstr_nl(r_dirp->d_name):0):ft_putstr_nl(r_dirp->d_name);
	}
}

int		main()
{
	DIR				*o_dirp;

	o_dirp = opendir(".");
	if (o_dirp)
		ls_a(o_dirp, 0);
	return (0);
}
