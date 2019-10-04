/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <sapril@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 15:38:57 by sapril            #+#    #+#             */
/*   Updated: 2019/09/29 18:54:45 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
#define _H

#include "tetramino.h"
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void read_input(int fd, char *buf, t_tetra_el *begin_tetra);
t_tetra_info *read_one_block(char *buf, int y_buff[], int x_buff[], char sign);


#endif
