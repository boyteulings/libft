/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:46 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:47 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// writes len bytes of value c (converted to unsigned char) to string b
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = b;
	while (i < len)
	{
		p[i] = c;
		i++;
	}
	return (b);
}
