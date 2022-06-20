/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 15:04:57 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/20 15:47:30 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief counts length of int passed as n
 * 
 * @param n int to be counted
 * @param base the base used
 * @return int – length of n
 */
int	ft_intlen_base(long long n, int base)
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
		n /= base;
		len++;
	}
	return (len);
}