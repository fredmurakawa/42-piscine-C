/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/22 18:53:50 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/22 18:53:51 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char	text[34];

	text = "THE FOLLOWING TAKES PLACE BETWEEN";
	if (hour == 0)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", text, 12, hour + 1);
	else if (hour < 11)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", text, hour, hour + 1);
	else if (hour == 11)
		printf("%s %d.00 A.M. AND %d.00 P.M.\n", text, hour, hour + 1);
	else if (hour == 23)
		printf("%s %d.00 P.M. AND %d.00 A.M.\n", text, hour - 12, 12);
	else if (hour == 12)
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", text, hour, 1);
	else if (hour == 24)
		printf("%s %d.00 A.M. AND %d.00 A.M.\n", text, 12, 1);
	else
		printf("%s %d.00 P.M. AND %d.00 P.M.\n", text, hour - 12, hour - 11);
}
