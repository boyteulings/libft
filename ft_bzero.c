/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:37:34 by bteuling      #+#    #+#                 */
/*   Updated: 2022/01/24 13:28:21 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

// bzero writes n zeroed bytes to string s. If n is zero, bzero does nothing
void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		n--;
		i++;
	}
}
