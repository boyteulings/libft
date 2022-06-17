/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:26 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/17 18:33:23 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// compares byte string s1 against s2,
// both strings are assumed to be n bytes long
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*cs1;
	const unsigned char	*cs2;

	cs1 = s1;
	cs2 = s2;
	i = 0;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}
