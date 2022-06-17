/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:17 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:38:18 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// checks if character is an ASCII character
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
