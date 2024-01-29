/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowflake <hrychkatetiana@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:37:42 by snowflake         #+#    #+#             */
/*   Updated: 2024/01/29 22:57:14 by snowflake        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include "includes/libft.h"

int ft_isalnum(char a)
{
    if (ft_isalpha(a) || ft_isdigit (a))
        return (1);
    return(0);
}

int main(void)
{
    printf("%d",ft_isalnum('='));
}