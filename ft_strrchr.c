/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:54 by marvin            #+#    #+#             */
/*   Updated: 2025/11/04 20:01:43 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			result = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		result = (char *)s;
	return (result);
}
