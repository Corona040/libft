/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:30:36 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/25 22:40:14 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdbool.h>
# include <math.h>
# include <limits.h>
# include "../libft.h"

# include <stdlib.h>

# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

# include <execinfo.h>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define DFLT "\033[0m"

# define CRASH 2
# define FAILURE 1
# define SUCCESS 0

int	fail_malloc = 0;
int	status = SUCCESS;

typedef int(*unit_test)(void);
typedef unit_test test_suite[];

struct {
	size_t		idx;
	unit_test	tests[256];
}	suite;

int			ft_test_env(unit_test test);
void		ft_announce(void);

# define _ft_announce() do {char str[256]; memset(str, 0, 256); sprintf(str, DFLT"\n%-15s %4d - ", __func__, __LINE__); write(STDOUT_FILENO, str, strlen(str));} while (0)

# define _ft_FAIL(severity) printf(severity"%-7s ", " T-T ")
# define _ft_PASS() printf(GREEN"%-5s ", " ^-^ ")
# define _ft_assert(test, severity) do {if (!(test)){ _ft_FAIL(severity); return (FAILURE);} else { _ft_PASS();}} while (0)
# define _ft_verify(test) do { int r=test(); tests_run++; if (r) return (r);} while (0)
# define _ft_weakVerify(test) do { int r=ft_test_env(test); tests_run++; if (r == 1) status += r;} while (0)

#endif
