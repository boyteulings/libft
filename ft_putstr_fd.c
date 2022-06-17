/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:12 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:41:13 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// outputs string s to file descriptor(fd)
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
