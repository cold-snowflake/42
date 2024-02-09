/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowflake <hrychkatetiana@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 17:50:41 by snowflake         #+#    #+#             */
/*   Updated: 2024/02/09 17:51:04 by snowflake        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

 void ft_bzero(void *s, size_t n)
 {
    size_t i;
    i = 0;
    char* desk;

    desk = (char *) s;
    while (i < n)
    {
        desk[i] = 0;
        i++;
    }
}


