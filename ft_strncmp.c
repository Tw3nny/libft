/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matisgutierreztw3nny <matisgutierreztw3    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:35:14 by marvin            #+#    #+#             */
/*   Updated: 2025/11/03 04:02:45 by matisgutier      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    
    i = 0;
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        i++;
    }
    return (0);
}
/*
int	main(void)
{
	char s1[] = "ue ue sa dIt quoi";
	char s2[] = "ue ue sa dit quoi";

	printf("%d", ft_strncmp(s1, s2, 17));
	return (0);
}*/
