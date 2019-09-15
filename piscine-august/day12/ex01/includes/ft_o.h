/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_o.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 20:04:28 by sapril            #+#    #+#             */
/*   Updated: 2019/08/15 20:04:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_O_H
# define FT_O_H

# include <fcntl.h>
# include <unistd.h>
# include <errno.h>
# define MAX_BUF 30720
# define BUF_SIZE 1

void	ft_putchar(char c);
void	display_file(int argc, char *argv[]);
void	ft_strerror(int errn, char *prog_name, char *file_name);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_getchar(void);

#endif
