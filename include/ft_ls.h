/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaura-n <tsaura-n@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:13:27 by tsaura-n          #+#    #+#             */
/*   Updated: 2019/12/07 21:19:05 by tsaura-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "../libft/include/libft.h"

# include <dirent.h>

typedef struct s_entry
{
    struct dirent   *dirent;
    struct s_entry  *left;
    struct s_entry  *right;
    char            color;
}               t_entry;


#endif
