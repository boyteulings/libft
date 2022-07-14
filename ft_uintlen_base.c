/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uintlen_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 15:15:28 by bteuling      #+#    #+#                 */
/*   Updated: 2022/07/14 15:23:32 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief counts length of int passed as n
 * 
 * @param n unsigned int to be counted
 * @param base the base used
 * @return unsigned int – length of n
 */
int	ft_uintlen_base(unsigned long long n, int base)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
