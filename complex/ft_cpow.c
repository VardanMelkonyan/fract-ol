/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 15:08:50 by vmelkony          #+#    #+#             */
/*   Updated: 2021/07/20 15:14:47 by vmelkony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complex.h"

t_complex	ft_cpow(t_complex c, int pow)
{
	t_complex result;

	if (pow == 0)
	{
		result.real = 1;
		result.imag = 0;
		return (result);
	}
	if (pow == 1)
		return (c);
	return (ft_cpow(ft_cmult(c, c), pow - 1));
}
