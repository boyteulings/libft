/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:30 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/17 17:53:05 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// converts int to char, if negative make long nbr positive
// and set cnbr[0] to '-'.
// if nbr == 0 set cnbr[0] to '0' (ascii 48)
// before you modulo 10 the current char + ascii 48. 
char	*ft_itoa(int n)
{
	long	nbr;
	char	*cnbr;
	int		len;

	nbr = n;
	len = ft_intlen(nbr);
	cnbr = malloc((len + 1) * sizeof(char));
	if (cnbr == 0)
		return (NULL);
	cnbr[len] = '\0';
	len--;
	if (nbr < 0)
	{
		cnbr[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		cnbr[0] = '0';
	while (nbr > 0 && len >= 0)
	{
		cnbr[len] = '0' + (nbr % 10);
		nbr /= 10;
		len--;
	}
	return (cnbr);
}
