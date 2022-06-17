/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bteuling <boyteulings@gmail.com>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/14 14:38:59 by bteuling      #+#    #+#                 */
/*   Updated: 2021/12/14 14:39:00 by bteuling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// counts characters to remove at start of *s1
static unsigned int	fc(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	fcount;

	i = 0;
	j = 0;
	fcount = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				if (fcount == i)
					fcount++;
			}
			j++;
		}
		i++;
	}
	return (fcount);
}

// counts characters to remove at end of *s1
static unsigned int	bc(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;
	unsigned int	bcount;

	len = ft_strlen(s1) - 1;
	i = 0;
	j = 0;
	bcount = 0;
	while (len > 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[len] == set[j])
			{
				if (bcount == i)
					bcount++;
			}
			j++;
		}
		len--;
		i++;
	}
	return (bcount);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (!s1)
		return (NULL);
	if (ft_strncmp(s1, "", (size_t) ft_strlen(s1)) == 0)
	{
		s1 = ft_calloc(1, 1);
		return ((char *) s1);
	}
	str = ft_substr(s1, fc(s1, set), ft_strlen(s1) - fc(s1, set) - bc(s1, set));
	return (str);
}
