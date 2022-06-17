/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 18:22:55 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/06 18:23:06 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// locates the first occurrence of c (converted to unsigned char) in s
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long			i;
	const unsigned char		*cs;
	unsigned char			cc;

	cs = s;
	cc = c;
	i = 0;
	while (n > 0)
	{
		if (cs[i] == cc)
			return (&((char *)s)[i]);
		i++;
		n--;
	}
	return (0);
}
