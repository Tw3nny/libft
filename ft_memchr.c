/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:05:18 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 22:22:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	tmp = (unsigned char) s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char ) c)
			return ((void *) &tmp[i]);
		i++;
	}
	return (NULL);
}
