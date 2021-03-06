/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <aleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 13:44:05 by aleveque          #+#    #+#             */
/*   Updated: 2017/06/14 18:31:23 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ls.h"

void	error_opt(int opt)
{
	ft_printf("ls: illegal option -- %c\n", opt);
	ft_printf("usage: ls [-alrRt1] [file ...]\n");
	exit(0);
}

void	error(int err)
{
	if (err == 1)
	{
	}
	exit(0);
}
