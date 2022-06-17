/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:37:51 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:37:53 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// contiguously allocates enough space for count objects of size bytes of memory
// and returns a pointer to the allocated memory
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr != 0)
		ft_bzero (ptr, count * size);
	return (ptr);
}
