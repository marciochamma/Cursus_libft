/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:27:24 by mchamma           #+#    #+#             */
/*   Updated: 2023/05/23 00:03:54 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Returns a copy of ’s1’ with the chars specified in ’set’ removed
// from the beginning and the end of the str.

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ret;

	start = 0;
	while (s1[start] != 0 && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	ret = (char *)malloc((end - start + 2) * sizeof(char));
	if (!ret)
		return (0);
	ft_strlcpy(ret, &s1[start], end - start + 2);
	ret[end - start + 1] = 0;
	return (ret);
}

// #include<stdio.h>

// int	main(void)
// {
// 	char const	*s1;
// 	char const	*set;
// 	char		*ret;

// 	s1 = "aaMarcioaaaaaa";
// 	set = "abc";

// 	ret = ft_strtrim(s1, set);
// 	printf("%s\n", ret);
// 	free(ret);
// 	return (0);
// }
