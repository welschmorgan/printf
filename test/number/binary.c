/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwelsch <mwelsch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/02 22:03:54 by mwelsch           #+#    #+#             */
/*   Updated: 2016/05/02 22:04:06 by mwelsch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		main()
{
	int		code;
	code = 0;
	code = code >= 0 ? ft_printf("test_bin: %b\n", 42) : code;
	return (code);
}