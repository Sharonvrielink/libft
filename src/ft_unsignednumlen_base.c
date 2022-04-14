/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_numlen_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: svrielin <svrielin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 15:41:14 by svrielin      #+#    #+#                 */
/*   Updated: 2022/04/14 14:13:58 by svrielin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_unsignednumlen_base(unsigned long long n, int base)
{
	size_t	i;

	i = 1;
	while (n >= (unsigned long long) base)
	{
		n /= base;
		i++;
	}
	return (i);
}
