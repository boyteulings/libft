/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:21 by bteuling      #+#    #+#                 */
/*   Updated: 2022/06/21 15:03:47 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief Writes a character to given file descriptor and returns the amount of bytes written
 * 
 * @param c character to write
 * @param fd file descriptor to write to
 * @return int – amount of bytes written
 */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
