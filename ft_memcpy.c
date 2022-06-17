/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:32 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:32 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// copies n bytes from src to dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dst;
	i = 0;
	if (src == 0 && dst == 0)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
