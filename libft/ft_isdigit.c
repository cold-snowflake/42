/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snowflake <hrychkatetiana@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:30:42 by snowflake         #+#    #+#             */
/*   Updated: 2024/01/29 22:48:46 by snowflake        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit (char a)
{
    if  (a >= 48 && a <= 57)
        return (1);
    return(0);
}
