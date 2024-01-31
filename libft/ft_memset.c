/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowflake <hrychkatetiana@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:20:34 by snowflake         #+#    #+#             */
/*   Updated: 2024/01/31 19:20:03 by snowflake        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h> 

void *ft_memset(void *str, int c, size_t n)
{
	size_t i;
	char *string;

	i = 0;
	string = (char *) str;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (str);
}
