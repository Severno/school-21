/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapril <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 15:17:29 by sapril            #+#    #+#             */
/*   Updated: 2019/09/03 15:17:30 by sapril           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	swap(char **arg1, char **arg2);
void	print(int argc, char *argv[]);
int		ft_strcmp(char *s1, char *s2);

int		main(int argc, char *argv[])
{
	int i;
	int j;

	j = 1;
	i = 1;
	while (i < argc)
	{
		i++;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		j = 0;
	}
	print(argc, argv);
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int compare;

	i = 0;
	compare = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] != s2[i])
		compare = s1[i] - s2[i];
	return (compare);
}

void	swap(char **arg1, char **arg2)
{
	char *temp;

	temp = *arg1;
	*arg1 = *arg2;
	*arg2 = temp;
}

void	print(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
