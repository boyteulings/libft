/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:36 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:38:37 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// shifts characters in the ASCII table to uppercase
int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		c = c - 32;
	}
	return (c);
}
