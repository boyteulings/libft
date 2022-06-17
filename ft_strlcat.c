/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:39:10 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:39:11 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// appends src to end of dst, up to as much as dstsize - dst - 1
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	indst;

	indst = ft_strlen(dst);
	i = 0;
	if (dstsize <= indst)
		return (ft_strlen(src) + dstsize);
	while (src[i] && indst + i < dstsize - 1)
	{
		dst[indst + i] = src[i];
		i++;
	}
	dst[indst + i] = '\0';
	return (ft_strlen(src) + indst);
}
