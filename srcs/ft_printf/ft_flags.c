/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:09:48 by wkorande          #+#    #+#             */
/*   Updated: 2019/12/01 15:05:52 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_env	*ft_create_env(void)
{
	t_env *env;

	if (!(env = (t_env*)malloc(sizeof(t_env))))
		return (NULL);
	ft_init_env(env);
	return (env);
}

void	ft_init_env(t_env *env)
{
	if (!env)
		return ;
	env->hash = 0;
	env->zero_specified = 0;
	env->zero = 0;
	env->minus = 0;
	env->plus = 0;
	env->space = 0;
	env->width_specified = 0;
	env->width = 0;
	env->width_left = 0;
	env->precision_specified = 0;
	env->precision = 0;
	env->precision_left = 0;
	env->prefix_specified = 0;
	env->prefix = NULL;
	env->prefixlen = 0;
	env->length = LEN_NONE;
}

void	ft_set_prefix(t_env *env, char *prefix, int len)
{
	env->prefix = prefix;
	env->prefixlen = len;
	env->prefix_specified = 1;
}
