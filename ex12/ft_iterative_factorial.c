/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:33:06 by antandre          #+#    #+#             */
/*   Updated: 2024/06/11 12:50:14 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Un factorial es el múltiplo de todos sus anteriores (3! = 3 * 2 * 1)
// fact! = nb * (nb - 1)!
// fact! = nb-- * fact! 

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (fact);
	while (nb > 0)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
