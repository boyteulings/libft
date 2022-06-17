/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:24 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:38:25 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// checks if character is a digit
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
