/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmusaely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:54:22 by vmusaely          #+#    #+#             */
/*   Updated: 2020/11/04 17:11:17 by vmusaely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;
	int final;

	final = 1;
	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			final = 0;
		i++;
	}
	return (final);
}