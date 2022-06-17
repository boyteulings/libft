/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:41 by bteuling      #+#    #+#                 */
/*   Updated: 2022/01/24 17:05:13 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// if dst > src copy backwards, so as not to leave any empty spaces
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (src == 0 && dst == 0)
		return (d);
	if (dst > src)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
