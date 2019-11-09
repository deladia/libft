/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deladia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 18:08:41 by deladia           #+#    #+#             */
/*   Updated: 2019/04/09 16:37:14 by deladia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int ch)
{
	if ('a' <= ch && ch <= 'z')
	{
		return (1);
	}
	else if ('A' <= ch && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}
