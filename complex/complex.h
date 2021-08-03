/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_complex.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmelkony <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 16:06:20 by vmelkony          #+#    #+#             */
/*   Updated: 2021/07/20 15:15:35 by vmelkony         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_H
# define COMPLEX_H

# include <math.h>

typedef struct s_complex
{
	double	real;
	double	imag;
}	t_complex;

t_complex	ft_cadd(t_complex c1, t_complex c2);

t_complex	ft_csub(t_complex c1, t_complex c2);

t_complex	ft_cmult(t_complex c1, t_complex c2);

t_complex	ft_cpow(t_complex c, int pow);

double		ft_cabs(t_complex c);

#endif
