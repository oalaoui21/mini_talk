/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oalaoui- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:34:52 by oalaoui-          #+#    #+#             */
/*   Updated: 2022/01/11 16:34:55 by oalaoui-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	send_mssj(char *mssj, int pid)
{
	int	i;
	int	shift;

	i = -1;
	while (++i < strlen(mssj))
	{
		shift = -1;
		while (++shift < 8)
		{
			if (mssj[i] & (128 >> shift))
			{
				if (kill(pid, SIGUSR1) == -1)
					exit(1);
			}
			else
			{
				if (kill(pid, SIGUSR2) == -1)
					exit(1);
			}
			usleep(800);
		}
	}
}

int	main(int argc, char **argv)
{
	int		ppid;

	if (argc != 3)
	{
		ft_putstr_fd("Error, Invalid Parameters!");
		exit(1);
	}
	ppid = ft_atoi(argv[1]);
	if (ppid == -1)
		exit(1);
	send_mssj(argv[2], ppid);
}
