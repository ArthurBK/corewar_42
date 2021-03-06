/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzial <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 10:52:35 by amarzial          #+#    #+#             */
/*   Updated: 2016/11/12 18:57:17 by amarzial         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((t_uc) * s1 == (t_uc) * s2 && *s1 && *s2)
	{
		++s1;
		++s2;
	}
	return ((t_uc) * s1 - (t_uc) * s2);
}
