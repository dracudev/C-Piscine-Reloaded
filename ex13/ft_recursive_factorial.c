/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:05:12 by antandre          #+#    #+#             */
/*   Updated: 2024/06/11 12:48:54 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Un factorial es el múltiplo de todos sus anteriores (3! = 3 * 2 * 1)
// fact! = nb * (nb - 1)!
// fact! = nb * ft_recursive_factorial(nb - 1)

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
