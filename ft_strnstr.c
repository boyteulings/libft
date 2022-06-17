/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:39:31 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:39:31 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// locates first occurrence of needle in haystack,
// not searching more than len characters
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen(haystack) < 0 || ft_strlen(needle) == 0)
		return ((char *)haystack);
	if ((size_t)ft_strlen(needle) > len)
		return (0);
	while (haystack[i] && i < len)
	{
		if (ft_strncmp(&haystack[i], needle, ft_strlen(needle)) == 0)
		{
			if (i + ft_strlen(needle) > len)
				return (0);
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
