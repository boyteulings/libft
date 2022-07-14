/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa_base.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 17:25:33 by bteuling      #+#    #+#                 */
/*   Updated: 2022/07/14 16:05:33 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief converts int to char
 * 
 * @param n int to be converted
 * @param base the base to be used in conversion
 * @param base_string alphanumeric string which is the base used to convert n
 * @return char
 */
char	*ft_itoa_base(long long n, int base, const char *base_string)
{
	char	*converted_n;
	int		len;
	long	num;

	len = ft_intlen_base(n, base);
	converted_n = malloc((len + 1) * sizeof(char));
	if (!converted_n || !base_string)
		return (NULL);
	converted_n[len] = '\0';
	len--;
	num = n;
	if (n < 0)
	{
		converted_n[0] = '-';
		num = -n;
	}
	else if (n == 0)
		converted_n[0] = '0';
	while (num && len)
	{
		converted_n[len] = base_string[num % base];
		num /= base;
		len--;
	}
	return (converted_n);
}
