/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skulkamt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 21:20:14 by skulkamt          #+#    #+#             */
/*   Updated: 2023/01/30 21:20:38 by skulkamt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = *s1 - *s2;
	if (*s1 == 0 || *s2 == 0 || diff != 0)
	{
		return (diff);
	}
	else
	{
		return (ft_strcmp(s1 + 1, s2 + 1));
	}
}
