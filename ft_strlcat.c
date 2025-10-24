/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:55:11 by marvin            #+#    #+#             */
/*   Updated: 2025/10/14 20:33:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	j;

	len_dst = 0;
	len_src = 0;
	j = 0;
	while (src[len_src])
		len_src++;
	while (dst[len_dst])
		len_dst++;
	if (dstsize <= len_dst)
		return (dstsize + len_dst);
	while (src[j] != '\0' && len_dst < dstsize - 1)
	{
		dst[len_dst + j] = src[j];
		j++;
	}
	dst[len_dst] = '\0';
	return (len_dst + len_src);
}
/*
int	main(void)
{
	char dst[17] = "ue ue ";
	char src[] = "sa dit quoi";
	printf("%ld", ft_strlcat(dst, src, 17));
	return (0);
}*/
