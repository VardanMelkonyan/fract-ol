/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cadd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:05:43 by vmelkony          #+#    #+#             */
/*   Updated: 2021/07/06 16:06:22 by vmelkony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complex.h"

t_complex	ft_cadd(t_complex c1, t_complex c2)
{
	t_complex c;

	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;

	return c;
}
