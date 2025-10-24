/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:23:09 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 22:25:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j] && haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char haystack[] = "ue ue sa dit quoi";
	const char needle[] = "sa";
	size_t len = 17;
	printf("%s", ft_strnstr(haystack, needle, len));
	return (0);

}*/
