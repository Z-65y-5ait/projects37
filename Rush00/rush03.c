/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irabhi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:52:48 by irabhi            #+#    #+#             */
/*   Updated: 2024/07/01 15:08:52 by irabhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_row(long colm, long row, long colm_index, long row_index)
{
	if ((colm_index == 1 && row_index == 1) || ((colm_index == 1)
			&& (row_index == row)))
		ft_putchar('A');
	else if ((colm_index > 1 && colm_index < colm)
		&& (row_index == 1 || row_index == row))
		ft_putchar('B');
	else if ((colm_index == 1 || colm_index == colm)
		&& (row_index > 1 && row_index < row))
		ft_putchar('B');
	else if ((colm_index == colm && row_index == 1)
		|| (row_index == row && colm_index == colm))
		ft_putchar('C');
	else if ((colm_index > 1 && colm_index < colm)
		&& (row_index > 1 && row_index < row))
		ft_putchar(' ');
}

int	rush(int x, int y)
{
	long	colm_index;
	long	row_index;
	long	row;
	long	colm;

	if (x <= 0 || y <= 0)
		return (0);
	if (x > 2147483647 && y > 2147483647)
		return (0);
	row_index = 1;
	colm = x;
	row = y;
	while (row_index <= row)
	{
		colm_index = 1;
		while (colm_index <= colm)
		{
			ft_print_row(colm, row, colm_index, row_index);
			colm_index++;
		}
		ft_putchar('\n');
		row_index++;
	}
	return (0);
}
