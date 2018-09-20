/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmetseem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:05:55 by nmetseem          #+#    #+#             */
/*   Updated: 2018/06/05 16:03:42 by nmetseem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;
	size_t	counter;

	counter = 0;
	if (!s1 || !s2)
		return (NULL);
	temp = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!temp)
	{
		return (NULL);
	}
	while (counter <= ft_strlen(s1))
	{
		temp[counter] = s1[counter];
		counter++;
	}
	counter = 0;
	while (counter <= ft_strlen(s2))
	{
		temp[ft_strlen(s1) + counter] = s2[counter];
		counter++;
	}
	temp[ft_strlen(s1) + ft_strlen(s2) + 1] = '\0';
	return (temp);
}
