/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:06:24 by sapril            #+#    #+#             */
/*   Updated: 2019/09/02 23:08:03 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char const *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc && argc > 1)
	{
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
