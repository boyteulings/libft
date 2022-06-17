/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:41:26 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:41:27 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// recursively divides & modulos n to be able to write it into fd
void	ft_putnbr_fd(int n, int fd)
{
	char	nbr;

	if (n == -2147483648)
	{
		n = 147483648;
		write(fd, "-2", 2);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 0 && n <= 9)
	{
		nbr = n + '0';
		write(fd, &nbr, 1);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
