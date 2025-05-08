/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 15:43:51 by mramos-2          #+#    #+#             */
/*   Updated: 2025/05/08 10:18:52 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	result = malloc (len + 1 * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcopy(result & s[start], len + 1);
	return (result);
}
