/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 11:34:31 by sapril            #+#    #+#             */
/*   Updated: 2019/08/01 13:58:44 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	num_out(char i, char k, char j);

void	ft_print_comb(void)
{
	int i;
	int k;
	int j;

	i = '0';
	k = '1';
	j = '2';
	while (i <= '7')
	{
		k = i + 1;
		while (k <= '8')
		{
			j = k + 1;
			while (j <= '9')
			{
				num_out(i, k, j);
				j++;
			}
			k++;
		}
		i++;
	}
}

void	num_out(char i, char k, char j)
{
	if (j != k && j != i && i != k)
	{
		ft_putchar(i);
		ft_putchar(k);
		ft_putchar(j);
		if (i == '7' && k == '8' && j == '9')
			;
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
