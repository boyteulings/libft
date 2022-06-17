/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:30 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/15 14:32:46 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// counts length of long n, if negative make n positive and +1 len
static int	fn_intlen(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

// converts int to char, if negative make long nbr positive
// and set cnbr[0] to '-'.
// if nbr == 0 set cnbr[0] to '0' (ascii 48)
// before you modulo 10 the current char + ascii 48. 
char	*ft_itoa(int n)
{
	long	nbr;
	char	*cnbr;
	int		intlen;

	nbr = n;
	intlen = fn_intlen(nbr);
	cnbr = malloc((intlen + 1) * sizeof(char));
	if (cnbr == 0)
		return (NULL);
	cnbr[intlen] = '\0';
	intlen--;
	if (nbr < 0)
	{
		cnbr[0] = '-';
		nbr = -nbr;
	}
	else if (nbr == 0)
		cnbr[0] = '0';
	while (nbr > 0 && intlen >= 0)
	{
		cnbr[intlen] = '0' + (nbr % 10);
		nbr /= 10;
		intlen--;
	}
	return (cnbr);
}
