/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:22:17 by wkorande          #+#    #+#             */
/*   Updated: 2019/10/17 18:02:15 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*trim;
	int		beg;
	int		end;
	int		len;

	beg = 0;
	while (s[beg] == ' ' || s[beg] == '\n' || s[beg] == '\t')
		beg++;
	end = ft_strlen(s) - 1;
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	len = end - beg;
	if (!(trim = (char*)ft_memalloc(len + 1)))
		return (NULL);
	trim = ft_strncpy(trim, (char*)s + beg, len + 1);
	trim[len + 2] = '\0';
	return (trim);
}
