/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:22:12 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/27 11:06:34 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	if (dest[i] == '\0')
	{
		while (src[j] != '\0')
		{
			dest[j + i] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}
