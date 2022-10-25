/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-maar <ael-maar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:31:38 by ael-maar          #+#    #+#             */
/*   Updated: 2022/10/25 18:38:11 by ael-maar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putptr(void *p, size_t size, int *count)
{
	size_t			i;
	unsigned char	*p_cast;

	p_cast = p;
	i = 0;
	ft_putstr("0x", count);
	while (i < size)
	{
		if (p_cast[i] > 0)
			ft_puthex(p_cast[i], 'x', count);
		i++;
	}
}
