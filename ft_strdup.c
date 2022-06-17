/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:05 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:06 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// allocates memory for copy of s1, copies, and returns a pointer to it
char	*ft_strdup(const char *s1)
{
	char	*dst;

	dst = malloc(ft_strlen(s1) + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
