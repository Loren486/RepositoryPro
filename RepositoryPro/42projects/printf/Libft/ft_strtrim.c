/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:02:39 by alorenza          #+#    #+#             */
/*   Updated: 2023/10/09 12:37:16 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (ft_strdup(""));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	if (i >= j)
		return (ft_strdup(""));
	ptr = malloc(j - i + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, j - i + 1);
	return (ptr);
}
/*
int main()
{
    const char *original_str = "";
    const char *set = "";
    char *trimmed_str = ft_strtrim(original_str, set);

    if (trimmed_str)
    {
        printf("Cadena recortada: \"%s\"\n", trimmed_str);
        free(trimmed_str);
    }
    else
    {
        printf("Error: La función ft_strtrim devolvió NULL.\n");
    }

    return 0;
}*/