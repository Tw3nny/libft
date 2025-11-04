/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:44:32 by marvin            #+#    #+#             */
/*   Updated: 2025/11/04 14:27:37 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	if (n == 0)
		return (dst);
	if (!dst && !src)
		return (NULL);
	tmp1 = (unsigned char *) dst;
	tmp2 = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char dst[17];
	char src[] = "ue ue sa dit quoi";
	printf("avant :%s\n", dst);
	ft_memcpy(dst,src, 17);
	printf("apres :%s", dst);
	return (0);

}*/
