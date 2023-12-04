/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:02:48 by badriano          #+#    #+#             */
/*   Updated: 2023/12/03 23:13:37 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	throw_error(void)
{
	write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	char	*num;

	if (argc > 3 || argc == 1)
		throw_error();
	else if (argc == 2)
	{
		num = unique_num(argv[1]);
		if (is_valid_num(num))
			rush(DICT_FILE, num);
		free(num);
	}
	else if (argc == 3)
	{
		num = unique_num(argv[2]);
		if (is_valid_num(num))
			rush(argv[1], num);
		free(num);
	}
	return (0);
}
