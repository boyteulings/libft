/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_intlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/17 17:13:34 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/17 20:00:01 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief counts length of int passed as n
 * 
 * @param n int to be counted
 * @return int – length of n
 */
int	ft_intlen(long long n)
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
