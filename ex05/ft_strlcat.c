/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:57:06 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/27 00:06:33 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_srclong(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				srclong;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	srclong = ft_srclong(src);
	if (size == 0 || size <= i)
		return (srclong + size);
	while ((i + j) < (size - 1) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + srclong);
}
