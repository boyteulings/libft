/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:40:02 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:40:02 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// applies *f on each character of *s. each character is passed by address to f
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
