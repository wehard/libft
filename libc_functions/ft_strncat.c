/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:47:52 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/15 16:48:07 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (*src != '\0' && n < nb)
	{
		dest[i] = *src;
		i++;
		src++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
