/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 03:57:58 by matisgutier       #+#    #+#             */
/*   Updated: 2025/11/06 22:37:04 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

// compare 2 zones memoire sur une taille max donnée
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp1 = (const unsigned char *) s1;
	const unsigned char	*tmp2 = (const unsigned char *) s2;
	size_t				i;

	i = 0;
	while (i < n)
	{
		if (tmp1[i] != tmp2[i])
			return ((int)(tmp1[i] - tmp2[i]));
		i++;
	}
	return (0);
}
