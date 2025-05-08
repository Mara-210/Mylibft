/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramos-2 <mramos-2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:30:36 by mramos-2          #+#    #+#             */
/*   Updated: 2025/04/23 18:30:45 by mramos-2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(int str)
{
	if (!((str >= 65 && str <= 90)
			|| (str >= 97 && str <= 122)))
	{
		return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_isalpha('Q'));
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", ft_isalpha(1));
	printf("%d\n", ft_isalpha('q'));
	printf("%d\n", ft_isalpha('2'));
	return (0);
}*/
