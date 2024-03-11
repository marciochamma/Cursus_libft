/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:55:04 by mchamma           #+#    #+#             */
/*   Updated: 2023/05/22 23:34:01 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copies n characters from memory area src to dest, but for overlapping

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;

	if (!dst && !src)
		return (dst);
	i = 0;
	if (dst < src)
	{
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}	
	}
	else
	{
		while (n > 0)
		{
			((char *)dst)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	return (dst);
}

// #include<string.h>
// #include<stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dst[] = "Good";
// 	int		n;

// 	n = 30;
// 	memmove(dst, src, n);
// 	printf("%s\n", dst);

// 	ft_memmove(dst, src, n);
// 	printf("%s\n", dst);

// 	return (0);
// }
