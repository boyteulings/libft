/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:21 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:41:22 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// outputs char c on file descriptor(fd)
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
