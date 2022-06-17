/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:09 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:38:10 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// checks if character is in the alphabet
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
