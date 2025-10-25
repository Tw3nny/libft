/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:44:32 by marvin            #+#    #+#             */
/*   Updated: 2025/10/25 02:02:18 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *) dst;
	tmp2 = (unsigned char *) src;
	i = 0;
	if (src == NULL || dst == NULL)
		return (dst);
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
