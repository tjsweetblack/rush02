/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: badriano <badriano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 23:02:48 by badriano          #+#    #+#             */
/*   Updated: 2023/12/03 23:11:35 by badriano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	rush(char *dict, char *num)
{
	char	*buffer;

	buffer = ft_open_read(dict);
	if (!buffer)
	{
		free(buffer);
		return ;
	}
	print_all(buffer, num);
	free(buffer);
}
