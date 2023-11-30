/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:03:35 by dande-je          #+#    #+#             */
/*   Updated: 2023/07/19 20:35:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt_aux(int nb, int sqrt)
{
	if (nb < 0)
		return (0);
	else if (sqrt > 46340)
		return (0);
	else if (sqrt * sqrt == nb)
		return (sqrt);
	return (ft_sqrt_aux(nb, sqrt + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_aux(nb, 1));
}
