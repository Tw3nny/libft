/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 23:59:53 by marvin            #+#    #+#             */
/*   Updated: 2025/10/13 01:40:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1ere boucle si dst est devant, 2eme boucle si src est devant
// 1ere boucle on par de la fin, 2eme boucle on part du debut -> cpy classique
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dst = (unsigned char *) dst;
	tmp_src = (unsigned char *) src;
	if (dst == NULL || src == NULL)
		return (dst);
	if (tmp_dst > tmp_src)
	{
		i = len;
		while (i-- > 0)
			tmp_dst[i] = tmp_src[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char dst[] ="12345678901234567890";
	char src[] = "ue ue sa dit quoi";
	printf("avant : %s\n", dst);
	ft_memmove(dst,src, 17);
	printf("apres : %s", dst);
	return (0);

}*/
