/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   timestamp.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcollas <rcollas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 16:33:23 by rcollas           #+#    #+#             */
/*   Updated: 2022/01/09 17:49:35 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TIMESTAMP_H
# define TIMESTAMP_H

# include <sys/time.h>
# include "error.h"
# include "struct.h"

long	get_timestamp(long start);
void	get_starting_timestamp(t_var *var);
long	elapsed_time(long start, long end);
long	get_time(void);

#endif
