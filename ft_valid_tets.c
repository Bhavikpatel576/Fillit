/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_tets.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpatel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 17:18:28 by bpatel            #+#    #+#             */
/*   Updated: 2016/12/06 17:22:20 by bpatel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"


const char	*valid_tetrimino(void)
{

	const char *valid_tets[19];
	
	valid_tets[0] = H_LINE;
	valid_tets[1] = V_LINE;
 	valid_tets[2] = H_S;
 	valid_tets[3] = V_S;
	valid_tets[4] = H_Z;
	valid_tets[5] = V_Z;
	valid_tets[6] = SQU;
	valid_tets[7] = N_L;
 	valid_tets[8] = V_L;
	valid_tets[9] = U_L;
 	valid_tets[10] = I_L;
 	valid_tets[11] = N_J;
 	valid_tets[12] = V_J;
	valid_tets[13] = U_J;
 	valid_tets[14] = I_J;
 	valid_tets[15] = N_T;
 	valid_tets[16] = V_T;
 	valid_tets[17] = U_T;
 	valid_tets[18] = I_T;

 	return (valid_tets);
 }