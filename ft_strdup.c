/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 00:56:44 by matisgutier       #+#    #+#             */
/*   Updated: 2025/10/27 02:59:39 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*tab;

	size = ft_strlen(s1);
	tab = malloc(sizeof(char) * (size + 1));
	if (!tab)
		return (NULL);
	ft_strlcpy(tab, s1, size + 1);
	return (tab);
}
/*
int	main(void)
{
	char *dst = "";
	char *s1 = "ue ue sa dit quoi"; 
	printf("avant %s\n", dst);
	dst = ft_strdup(s1);
	printf("apres %s\n", dst);
	free(dst);
	return (0);
}*/
