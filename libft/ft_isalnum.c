/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahouari <ahouari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 08:29:06 by ahouari           #+#    #+#             */
/*   Updated: 2022/06/05 08:36:09 by ahouari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if (a >= 'a' && a <= 'z')
		return (3);
	if (a >= 'A' && a <= 'Z')
		return (2);
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}
