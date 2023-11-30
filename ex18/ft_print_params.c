/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:05:15 by dande-je          #+#    #+#             */
/*   Updated: 2023/07/20 22:50:48 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(++argv);
	return (0);
}
