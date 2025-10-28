/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:54 by marvin            #+#    #+#             */
/*   Updated: 2025/10/28 03:28:01 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	size_t	i;

	last = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			last = (char *) &s[i];
		i++;
	}
	if (s[i] == (char) c)
		last = (char *) &s[i];
	return (last);
}
