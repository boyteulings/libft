/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:39:26 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:39:27 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// mallocs and returns a substring from *s,
// beginning at start and of max length len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t) ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= (size_t) ft_strlen(s))
		return (ft_calloc(1, 1));
	str = (char *) malloc(len + 1);
	if (str == 0)
		return (NULL);
	while (s[i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
