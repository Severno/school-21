/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetramino.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 13:35:28 by sapril            #+#    #+#             */
/*   Updated: 2019/09/29 15:15:35 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TETRAMINO_H
#define TETRAMINO_H

#include <stdlib.h>
#include <stdio.h>


#define CHARS_NUMBER 4

typedef struct			s_tetra_info
{
	int					*x;
	int					*y;
	char				sign;
}						t_tetra_info;

typedef struct			s_tetra_el
{
	struct s_tetra_info	*figure;
	struct s_tetra_el	*next;
}						t_tetra_el;

t_tetra_info	*create_tetra_info(int *x, int *y, char sign);
t_tetra_el		*create_tetra_el(t_tetra_info *tetra_info);
void			free_tetra_el(t_tetra_el *tetra_el);
void			add_back_tetra_el(t_tetra_el *begin_tetra_list, t_tetra_info *tetra_info);


#endif
