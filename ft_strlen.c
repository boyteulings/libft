/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:39:51 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/15 14:36:25 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// counts and returns length of string *s
int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
