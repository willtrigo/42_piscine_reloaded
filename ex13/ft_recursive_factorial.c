/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:27:49 by dande-je          #+#    #+#             */
/*   Updated: 2023/07/19 18:54:02 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_aux(int nb, int factorial)
{
	if (nb <= 1)
		return (factorial);
	return (ft_recursive_factorial_aux(nb - 1, nb * factorial));
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_recursive_factorial_aux(nb, 1));
}
