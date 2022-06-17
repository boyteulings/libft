/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:39:43 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/15 14:37:48 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// identical to strchr, but locates last occurrence of c
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	return (0);
}
