/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:05:10 by vmelkony          #+#    #+#             */
/*   Updated: 2021/07/06 16:05:12 by vmelkony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complex.h"

t_complex	ft_cmult(t_complex c1, t_complex c2)
{
	t_complex c;

	c.real = c1.real * c2.real - c1.imag * c2.imag;
	c.imag = c1.imag * c2.real + c2.imag * c1.real;

	return c;
}
