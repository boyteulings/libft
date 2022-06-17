/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:21 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:21 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// checks if character is printable
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
