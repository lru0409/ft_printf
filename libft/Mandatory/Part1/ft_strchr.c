/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolee <rolee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:00:44 by rolee             #+#    #+#             */
/*   Updated: 2024/03/20 16:59:03 by rolee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		idx;

	idx = 0;
	while (s[idx])
	{
		if (s[idx] == (char)c)
			return (&((char *)s)[idx]);
		idx++;
	}
	if ((char)c == 0)
		return (&((char *)s)[idx]);
	return (NULL);
}
