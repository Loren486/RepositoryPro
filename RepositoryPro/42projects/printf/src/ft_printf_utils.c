/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorenza <alorenza@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:45:44 by alorenza          #+#    #+#             */
/*   Updated: 2023/11/21 12:45:44 by alorenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1)
        i++;
    }
}

int ft_printstr(char *str)
{
    int i;

    i = 0;
    if (str == NULL)
    {
        ft_putstr("(null)");
        return (6);
    }
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
    return (i);
}

int ft_printnbr(int n)
{
    int    len;
    char   *num;

    len = 0;
    num = ft_itoa(n);
    len = ft_printstr(num);
    free(num);
    return (len);
}

int ft_printchar(int c)
{
    write(1, &c, 1)
    return (1);
}

int ft_printpercent(void)
{
    write(1, %, 1)
    return (1);
}
