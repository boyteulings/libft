/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:41 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:38:42 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// shifts characters in the ASCII table to lowercase
int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		c = c + 32;
	}
	return (c);
}
