/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uintlen_base.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <bteuling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/14 15:15:28 by bteuling      #+#    #+#                 */
/*   Updated: 2022/07/14 15:37:14 by bteuling      ########   odam.nl         */
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
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}
