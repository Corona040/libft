/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:52:23 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/24 00:00:32 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <ctype.h>
#include <string.h>

int	isalpha_00(void);
int	isdigit_00(void);
int	isalnum_00(void);
int	isascii_00(void);
int	isprint_00(void);
int	toupper_00(void);
int	tolower_00(void);
int	strlen_00(void);
int	strlen_01(void);
int	strlen_02(void);
int	strchr_00(void);
int	strchr_01(void);
int	strchr_02(void);
int	strchr_03(void);
int	strchr_04(void);
int	strrchr_00(void);
int	strrchr_01(void);
int	strrchr_02(void);
int	strrchr_03(void);
int	strrchr_04(void);
int	strncmp_00(void);
int	strncmp_01(void);
int	strncmp_02(void);
int	strncmp_03(void);
int	strncmp_04(void);

int	tests_run = 0;
suite	tests = {
					isalpha_00,
					isdigit_00,
					isalnum_00,
					isascii_00,
					isprint_00,
					toupper_00,
					tolower_00,
					strlen_00, strlen_01, strlen_02,
					strchr_00, strchr_01, strchr_02, strchr_03, strchr_04,
					strrchr_00, strrchr_01, strrchr_02, strrchr_03, strrchr_04,
					strncmp_00, strncmp_01, strncmp_02, strncmp_03, strncmp_04,
					NULL
				};

int	isalpha_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && ((ft_isalpha(i) > 0) == (isalpha(i) > 0));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	isdigit_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && ((ft_isdigit(i) > 0) == (isdigit(i) > 0));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	isalnum_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && ((ft_isalnum(i) > 0) == (isalnum(i) > 0));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	isascii_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && ((ft_isascii(i) > 0) == (isascii(i) > 0));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	isprint_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && ((ft_isprint(i) > 0) == (isprint(i) > 0));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	toupper_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && (ft_toupper(i) == toupper(i));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	tolower_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++) {
		result = result && (ft_tolower(i) == tolower(i));
	}
	_ft_assert(result, RED);
	return (SUCCESS);
}

// string.h strlen has nonnull attribute
int	strlen_00(void)
{
	_ft_assert(ft_strlen(NULL) == 0, YELLOW);
	return (SUCCESS);
}

int	strlen_01(void)
{
	char	str[5] = {0,-1,-1,-1,-1};

	_ft_assert(ft_strlen(str) == strlen(str), RED);
	return (SUCCESS);
}

int	strlen_02(void)
{
	char	str[5] = {-1,-1,-1,-1,0};

	_ft_assert(ft_strlen(str) == strlen(str), RED);
	return (SUCCESS);
}

int	strchr_00(void)
{
	_ft_assert(ft_strchr(NULL, 0) == NULL, RED);
	return (SUCCESS);
}

int	strchr_01(void)
{
	char	str[5] = {1, 1, -1, 1, 1};

	_ft_assert(ft_strchr(str, -1) == strchr(str, -1), RED);
	return (SUCCESS);
}

int	strchr_02(void)
{
	char	str[5] = {-1, -1, 0, -1, -1};

	_ft_assert(ft_strchr(str, 0) == strchr(str, 0), RED);
	return (SUCCESS);
}

int	strchr_03(void)
{
	char	str[5] = {3, 4, 5, 6, 0};

	_ft_assert(ft_strchr(str, 2) == strchr(str, 2), RED);
	return (SUCCESS);
}

int	strchr_04(void)
{
	char	str[2] = {0,-1};

	_ft_assert(ft_strchr(str, -1) == strchr(str, -1), RED);
	return (SUCCESS);
}

int	strrchr_00(void)
{
	_ft_assert(ft_strrchr(NULL, 0) == NULL, RED);
	return (SUCCESS);
}

int	strrchr_01(void)
{
	char	str[5] = {1, 1, -1, 1, 1};

	_ft_assert(ft_strrchr(str, -1) == strrchr(str, -1), RED);
	return (SUCCESS);
}

int	strrchr_02(void)
{
	char	str[5] = {-1, -1, 0, -1, -1};

	_ft_assert(ft_strrchr(str, 0) == strrchr(str, 0), RED);
	return (SUCCESS);
}

int	strrchr_03(void)
{
	char	str[5] = {3, 4, 5, 6, 0};

	_ft_assert(ft_strrchr(str, 2) == strrchr(str, 2), RED);
	return (SUCCESS);
}

int	strrchr_04(void)
{
	char	str[2] = {0,-1};

	_ft_assert(ft_strrchr(str, -1) == strrchr(str, -1), RED);
	return (SUCCESS);
}

int	strncmp_00(void)
{
	char	str[1] = {0};

	ft_strncmp(NULL, NULL, 0);
	ft_strncmp(NULL, NULL, 1);
	ft_strncmp(NULL, str, 1);
	ft_strncmp(str, NULL, 1);
	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strncmp_01(void)
{
	int		result = 1;
	char	str1[1] = {0};
	char	str2[1] = {-1};

	result = result && (ft_strncmp(str1, str1, 0) == strncmp(str1, str1, 0));
	result = result && (ft_strncmp(str1, str2, 0) == strncmp(str1, str2, 0));
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strncmp_02(void)
{
	char	str[1] = {0};

	_ft_assert(ft_strncmp(str, str, -1) == strncmp(str, str, -1), RED);
	return (SUCCESS);
}

int	strncmp_03(void)
{
	int		result = 1;
	char	str1[4] = {-1, -2, 0, -3};
	char	str2[4] = {-1, -2, 0, -4};

	result = result && (ft_strncmp(str1, str1, 3) == strncmp(str1, str1, 3));
	result = result && (ft_strncmp(str1, str2, 4) == strncmp(str1, str2, 4));
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strncmp_04(void)
{
	int		result = 1;
	char	str1[4] = {-1, -2, -3, 0};
	char	str2[4] = {-1, -2, 0};

	result = result && (ft_strncmp(str1, str1, 2) == strncmp(str1, str1, 2));
	result = result && (ft_strncmp(str1, str2, 3) == strncmp(str1, str2, 3));
	_ft_assert(result, RED);
	return (SUCCESS);
}

int	unit_test_suite(suite tests)
{
	while (*tests)
		_ft_weakVerify((*(tests++)));
	return (status);
}

int	main(void)
{
	int	result;

	result = 0;
	result += unit_test_suite(tests);
	if (result == 0)
		printf(GREEN"PASSED\n");
	else
		printf(RED"FAILED: %d\n", result);
	printf(DFLT"Tests run: %d\n", tests_run);

	return (result);
}
