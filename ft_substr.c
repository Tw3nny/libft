/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 03:04:47 by matisgutier       #+#    #+#             */
/*   Updated: 2025/10/27 03:51:12 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	i = 0;
	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_len)
		return (ft_strdup(""));
	if (start + len > s_len)
		len = s_len - (int) start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
int	main(void)
{
	char	*substr = ft_substr("ue ue sa dit quoi", , 7);
	printf("%s", substr);
	free(substr);
	return (0);
}*/