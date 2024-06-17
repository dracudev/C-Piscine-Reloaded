/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:31:06 by antandre          #+#    #+#             */
/*   Updated: 2024/06/13 18:26:13 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;
	int	aux;

	i = 0;
	aux = 0;
	count = 0;
	while (tab[i])
	{
		aux = (f)(tab[i]);
		if (aux == 1)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int	ft_isalnum(int c);
int	ft_isalnum_str(char *str)
{
	while (*str)
	{
		if (!ft_isalnum((unsigned char)*str))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char *tab[] = {"abc", "123", "AB12", "***", NULL};

	printf("%i", ft_count_if(tab, &ft_isalnum_str));
}
*/
