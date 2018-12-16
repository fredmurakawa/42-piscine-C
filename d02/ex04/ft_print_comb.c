/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbueno-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 10:20:43 by fbueno-m          #+#    #+#             */
/*   Updated: 2018/03/15 14:17:21 by fbueno-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '7')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '8')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]);
				if (!(numbers[0] == '7' && numbers[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
