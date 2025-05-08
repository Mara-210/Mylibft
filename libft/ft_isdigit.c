/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:31:26 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/23 18:31:32 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int str)
{
	if (!((str >= '0') && (str <= '9')))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	int str1 = '2';
	int str2 = 'a';
	int str3 = '4';
	printf("resultado: %i\n", ft_isdigit(str1));
	printf("resultado: %i\n", ft_isdigit(str2));
	printf("resultado: %i\n", ft_isdigit(str3));
	return (0);
}*/
