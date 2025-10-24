/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:39:54 by marvin            #+#    #+#             */
/*   Updated: 2025/10/19 22:05:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtchr(const char *s, int c)
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
