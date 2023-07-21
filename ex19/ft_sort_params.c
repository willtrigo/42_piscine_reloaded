/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:42:47 by dande-je          #+#    #+#             */
/*   Updated: 2023/07/21 17:23:50 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_sort_params(char **argv);
void	ft_print_params(char **argv);
int		ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argv);
		ft_print_params(++argv);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_params(char **argv)
{
	char	*swap;
	int		i;
	int		next_i;

	i = 1;
	while (argv[i])
	{
		next_i = i + 1;
		while (argv[next_i])
		{
			if (ft_strcmp(argv[i], argv[next_i]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[next_i];
				argv[next_i] = swap;
			}
			next_i++;
		}
		i++;
	}
}

void	ft_print_params(char **argv)
{
	while (*argv)
	{
		while (**argv)
			ft_putchar(*(*argv)++);
		ft_putchar('\n');
		++(argv);
	}
}
