/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:52:23 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/24 23:34:30 by ecorona-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

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
int	memcmp_00(void);
int	memcmp_01(void);
int	memcmp_02(void);
int	memcmp_03(void);
int	memcmp_04(void);
int	memset_00(void);
int	memset_01(void);
int	memset_02(void);
int	memchr_00(void);
int	memchr_00(void);
int	memchr_01(void);
int	memchr_02(void);
int	memchr_03(void);
int	memchr_04(void);
int	memchr_05(void);
int	bzero_00(void);
int	bzero_01(void);
int	bzero_02(void);
int	memcpy_00(void);
int	memcpy_01(void);
int	memcpy_02(void);
int	memmove_00(void);
int	memmove_01(void);
int	memmove_02(void);
int	memmove_03(void);
int	memmove_04(void);
int	memmove_05(void);
int	strnstr_00(void);
int	strnstr_01(void);
int	strnstr_02(void);
int	strnstr_03(void);
int	strnstr_04(void);
int	strnstr_05(void);
int	strlcpy_00(void);
int	strlcpy_01(void);
int	strlcpy_02(void);
int	strlcpy_03(void);
int	strlcat_00(void);
int	strlcat_01(void);
int	strlcat_02(void);
int	strlcat_03(void);
int	atoi_00(void);
int	atoi_01(void);
int	atoi_02(void);
int	atoi_03(void);
int	atoi_04(void);
int	atoi_05(void);
int	calloc_00(void);
int	calloc_01(void);
// int	calloc_02(void);
int	calloc_03(void);

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
					memcmp_00, memcmp_01, memcmp_02, memcmp_03, memcmp_04, 
					memset_00, memset_01, memset_02,
					memchr_00, memchr_01, memchr_02, memchr_03, memchr_04, memchr_05,
					bzero_00, bzero_01, bzero_02,
					memcpy_00, memcpy_01, memcpy_02,
					memmove_00, memmove_01, memmove_02, memmove_03, memmove_04, memmove_05,
					strnstr_00, strnstr_01, strnstr_02, strnstr_03, strnstr_04, strnstr_05,
					strlcpy_00, strlcpy_01, strlcpy_02, strlcpy_03,
					strlcat_00, strlcat_01, strlcat_02, strlcat_03,
					atoi_00, atoi_01, atoi_02, atoi_03, atoi_04,
					// calloc_00, calloc_01, calloc_02, calloc_03,
					calloc_00, calloc_01, calloc_03,
					NULL
				};

// compare to original from EOF to max unsigned char
int	isalpha_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isalpha(i) > 0) == (isalpha(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isdigit_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isdigit(i) > 0) == (isdigit(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isalnum_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isalnum(i) > 0) == (isalnum(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isascii_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isascii(i) > 0) == (isascii(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isprint_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isprint(i) > 0) == (isprint(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	toupper_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && (ft_toupper(i) == toupper(i));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	tolower_00(void)
{
	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && (ft_tolower(i) == tolower(i));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	strlen_00(void)
{
	int	wstatus;

	if (fork() == 0) {
		ft_strlen(NULL);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
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

// check null handling
int	strchr_00(void)
{
	int	wstatus;

	if (fork() == 0) {
		ft_strchr(NULL, 0);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
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

// check null handling
int	strrchr_00(void)
{
	int	wstatus;

	if (fork() == 0) {
		ft_strrchr(NULL, 0);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
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

// check null handling
int	strncmp_00(void)
{
	int		wstatus;
	char	str[1] = {0};

	if (fork() == 0) {
		ft_strncmp(NULL, NULL, 1);
		ft_strncmp(NULL, NULL, 1);
		ft_strncmp(NULL, str, 1);
		ft_strncmp(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

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

	result = result && (ft_strncmp(str1, str2, 3) == strncmp(str1, str2, 3));
	result = result && (ft_strncmp(str1, str2, 4) == strncmp(str1, str2, 4));

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strncmp_04(void)
{
	int		result = 1;
	char	str1[4] = {-1, -2, -3, 0};
	char	str2[4] = {-1, -2, 0};

	result = result && (ft_strncmp(str1, str2, 2) == strncmp(str1, str2, 2));
	result = result && (ft_strncmp(str1, str2, 3) == strncmp(str1, str2, 3));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	memcmp_00(void)
{
	int		wstatus;
	char	str[1] = {0};

	if (fork() == 0) {
		ft_memcmp(NULL, NULL, 1);
		ft_memcmp(NULL, NULL, 1);
		ft_memcmp(NULL, str, 1);
		ft_memcmp(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	memcmp_01(void)
{
	int		result = 1;
	char	str1[1] = {0};
	char	str2[1] = {-1};

	result = result && (ft_memcmp(str1, str1, 0) == memcmp(str1, str1, 0));
	result = result && (ft_memcmp(str1, str2, 0) == memcmp(str1, str2, 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memcmp_02(void)
{
	int		result = 1;
	char	str1[2] = {0, 0};
	char	str2[2] = {0, 0};

	result = result && (ft_memcmp(str1, str1, 2) == memcmp(str1, str1, 2));
	result = result && (ft_memcmp(str1, str2, 2) == memcmp(str1, str2, 2));

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memcmp_03(void)
{
	int		result = 1;
	char	str1[4] = {-1, -2, 0, -3};
	char	str2[4] = {-1, -2, 0, -4};

	result = result && (ft_memcmp(str1, str1, 3) == memcmp(str1, str1, 3));
	result = result && (ft_memcmp(str1, str2, 4) == memcmp(str1, str2, 4));

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memcmp_04(void)
{
	int		result = 1;
	char	str1[4] = {-1, -2, -3, 0};
	char	str2[4] = {-1, -2, 0};

	result = result && (ft_memcmp(str1, str1, 2) == memcmp(str1, str1, 2));
	result = result && (ft_memcmp(str1, str2, 3) == memcmp(str1, str2, 3));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	memset_00(void)
{
	int		wstatus;

	if (fork() == 0) {
		ft_memset(NULL, 1, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	memset_01(void)
{
	int		result = 1;
	char	str1[5] = {0, -1, 0, -1, -1};
	char	str2[5] = {0, -1, 0, -1, -1};

	result = result && (ft_memset(str1 + 1, 1, 3) == str1 + 1);
	memset(str2 + 1, 1, 3);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memset_02(void)
{
	int		result = 1;
	char	str1[5] = {0, -1, 0, -1, -1};
	char	str2[5] = {0, -1, 0, -1, -1};

	result = result && (ft_memset(str1, 1, 0) == str1);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	memchr_00(void)
{
	int	wstatus;

	if (fork() == 0) {
		ft_memchr(NULL, 0, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	memchr_01(void)
{
	char	str[5] = {0, 0, -1, 1, 1};

	_ft_assert(ft_memchr(str, -1, 5) == memchr(str, -1, 5), RED);
	return (SUCCESS);
}

int	memchr_02(void)
{
	char	str[5] = {0, 0, -1, 1, 1};

	_ft_assert(ft_memchr(str, -1, 3) == memchr(str, -1, 3), RED);
	return (SUCCESS);
}

int	memchr_03(void)
{
	char	str[5] = {-1, -1, 0, -1, -1};

	_ft_assert(ft_memchr(str, 0, 5) == memchr(str, 0, 5), RED);
	return (SUCCESS);
}

int	memchr_04(void)
{
	char	str[5] = {3, 4, 5, 6, 2};

	_ft_assert(ft_memchr(str, 2, 4) == memchr(str, 2, 4), RED);
	return (SUCCESS);
}

int	memchr_05(void)
{
	char	str[2] = {0,-1};

	_ft_assert(ft_memchr(str, -1, 2) == memchr(str, -1, 2), RED);
	return (SUCCESS);
}

// check null handling
int	bzero_00(void)
{
	int	wstatus;

	if (fork() == 0) {
		ft_bzero(NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	bzero_01(void)
{
	int		result = 1;
	char	str1[5] = {0, -1, 0, 1, 0};
	char	str2[5] = {0, -1, 0, 1, 0};

	ft_bzero(str1 + 1, 0);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	bzero_02(void)
{
	int		result = 1;
	char	str1[5] = {0, -1, 0, 1, 0};
	char	str2[5] = {0, -1, 0, 1, 0};

	ft_bzero(str1 + 1, 1 - 1);
	bzero(str2 + 1, 1 - 1);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	memcpy_00(void)
{
	int		wstatus;
	char	str[1] = {0};

	if (fork() == 0) {
		ft_memcpy(NULL, NULL, 1);
		ft_memcpy(NULL, str, 1);
		ft_memcpy(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	memcpy_01(void)
{
	int		result = 1;
	char	str1[5] = {5, 5, 5, 5, 5};
	char	str2[5] = {0, -1, 0, 1, 2};
	char	str3[5] = {5, 5, 5, 5, 5};
	char	str4[5] = {0, -1, 0, 1, 2};

	result = result && (ft_memcpy(str1 + 1, str2 + 1, 0) == str1 + 1);
	memcpy(str3 + 1, str4 + 1, 0);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str3[i]) && (str2[i] == str4[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memcpy_02(void)
{
	int		result = 1;
	char	str1[5] = {5, 5, 5, 5, 5};
	char	str2[5] = {0, -1, 0, 1, 2};
	char	str3[5] = {5, 5, 5, 5, 5};
	char	str4[5] = {0, -1, 0, 1, 2};

	result = result && (ft_memcpy(str1 + 1, str2 + 1, 3) == str1 + 1);
	memcpy(str3 + 1, str4 + 1, 3);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str3[i]) && (str2[i] == str4[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

//check null handling
int	memmove_00(void)
{
	int		wstatus;
	char	str[1] = {0};

	if (fork() == 0) {
		ft_memmove(NULL, NULL, 1);
		ft_memmove(NULL, str, 1);
		ft_memmove(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	memmove_01(void)
{
	int		result = 1;
	char	str1[5] = {5, 5, 5, 5, 5};
	char	str2[5] = {0, -1, 0, 1, 2};
	char	str3[5] = {5, 5, 5, 5, 5};
	char	str4[5] = {0, -1, 0, 1, 2};

	result = result && (ft_memmove(str1 + 1, str2 + 1, 0) == str1 + 1);
	memmove(str3 + 1, str4 + 1, 0);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str3[i]) && (str2[i] == str4[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memmove_02(void)
{
	int		result = 1;
	char	str1[5] = {5, 5, 5, 5, 5};
	char	str2[5] = {0, -1, 0, 1, 2};
	char	str3[5] = {5, 5, 5, 5, 5};
	char	str4[5] = {0, -1, 0, 1, 2};

	result = result && (ft_memmove(str1 + 1, str2 + 1, 3) == str1 + 1);
	memmove(str3 + 1, str4 + 1, 3);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str3[i]) && (str2[i] == str4[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memmove_03(void)
{
	int		result = 1;
	char	str1[10] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5};
	char	str2[10] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5};

	result = result && (ft_memmove(str1, str1 + 1, 3) == str1);
	memmove(str2, str2 + 1, 3);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	memmove_04(void)
{
	int		result = 1;
	char	str1[10] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5};
	char	str2[10] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5};

	result = result && (ft_memmove(str1 + 1, str1, 3) == str1 + 1);
	memmove(str2 + 1, str2, 3);
	for (int i = 0; i < 5; i++)
		result = result && (str1[i] == str2[i]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

// try memmvoing 5MB
int	memmove_05(void)
{
	size_t	n = 5 * 1024 * 1024;
	char	*str;
	int		wstatus;
	int		result = 1;

	if (fork() == 0) {
		str = malloc(n * sizeof(char));
		if (str) {
			bzero(str, n);
			ft_memmove(str + 1, str, n - 1);
			free(str);
		}
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus)) {
		printf(RED"[SEGFAULT]:\n");
		result = 0;
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	strnstr_00(void)
{
	char	str[1] = {-1};
	int		wstatus;

	if (fork() == 0) {
		ft_strnstr(NULL, NULL, 1);
		ft_strnstr(NULL, str, 1);
		ft_strnstr(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strnstr_01(void)
{
	char	little[1] = {-1};
	char	big[1] = {-1};

	_ft_assert(ft_strnstr(big, little, 0) == strnstr(big, little, 0), RED);
	return (SUCCESS);
}

int	strnstr_02(void)
{
	char	little[1] = {0};
	char	big[1] = {-1};

	_ft_assert(ft_strnstr(big, little, -1) == strnstr(big, little, -1), RED);
	return (SUCCESS);
}

int	strnstr_03(void)
{
	char	little[1] = {1};
	char	big[5] = {2, 3, 4, 5, 0};

	_ft_assert(ft_strnstr(big, little, -1) == strnstr(big, little, -1), RED);
	return (SUCCESS);
}

int	strnstr_04(void)
{
	char	little[3] = {1, 2, 3};
	char	big[10] = {1, 2, 1, 3, 1, 2, 1, 2, 3, 2};

	_ft_assert(ft_strnstr(big, little, -1) == strnstr(big, little, -1), RED);
	return (SUCCESS);
}

int	strnstr_05(void)
{
	char	little[3] = {1, 2, 3};
	char	big[10] = {1, 2, 1, 3, 1, 2, 1, 2, 3, 2};

	_ft_assert(ft_strnstr(big, little, 8) == strnstr(big, little, 8), RED);
	return (SUCCESS);
}

int	strlcpy_00(void)
{
	char	str[1] = {-1};
	int		wstatus;

	if (fork() == 0) {
		ft_strlcpy(NULL, NULL, 1);
		ft_strlcpy(NULL, str, 1);
		ft_strlcpy(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strlcpy_01(void)
{
	int		result = 1;
	char	src1[5] = {1, 2, 3, 4, 0};
	char	dst1[5] = {-1, -1, 0, -1, -1};
	char	src2[5] = {1, 2, 3, 4, 0};
	char	dst2[5] = {-1, -1, 0, -1, -1};

	result = result && (ft_strlcpy(dst1, src1, 0) == strlcpy(dst2, src2, 0));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strlcpy_02(void)
{
	int		result = 1;
	char	src1[5] = {1, 2, 3, 4, 0};
	char	dst1[5] = {-1, -1, 1, -1, -1};
	char	src2[5] = {1, 2, 3, 4, 0};
	char	dst2[5] = {-1, -1, 1, -1, -1};

	result = result && (ft_strlcpy(dst1, src1, 3) == strlcpy(dst2, src2, 3));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strlcpy_03(void)
{
	int		result = 1;
	char	src1[5] = {1, 0, 3, 4, 0};
	char	dst1[5] = {-1, -1, 0, -1, -1};
	char	src2[5] = {1, 0, 3, 4, 0};
	char	dst2[5] = {-1, -1, 0, -1, -1};

	result = result && (ft_strlcpy(dst1, src1, 5) == strlcpy(dst2, src2, 5));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strlcat_00(void)
{
	char	str[1] = {-1};
	int		wstatus;

	if (fork() == 0) {
		ft_strlcat(NULL, NULL, 1);
		ft_strlcat(NULL, str, 1);
		ft_strlcat(str, NULL, 1);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strlcat_01(void)
{
	int		result = 1;
	char	src1[5] = {1, 2, 3, 4, 0};
	char	dst1[10] = {-1, -1, 0, -1, -1, 0, 0, 0, 0, 0};
	char	src2[5] = {1, 2, 3, 4, 0};
	char	dst2[10] = {-1, -1, 0, -1, -1, 0, 0, 0, 0, 0};

	result = result && (ft_strlcat(dst1, src1, 0) == strlcat(dst2, src2, 0));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strlcat_02(void)
{
	int		result = 1;
	char	src1[5] = {1, 2, 3, 4, 0};
	char	dst1[10] = {-1, -1, 1, -1, 0, 0, 0, 0, 0, 0};
	char	src2[5] = {1, 2, 3, 4, 0};
	char	dst2[10] = {-1, -1, 1, -1, 0, 0, 0, 0, 0, 0};

	result = result && (ft_strlcat(dst1, src1, 3) == strlcat(dst2, src2, 3));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strlcat_03(void)
{
	int		result = 1;
	char	src1[5] = {1, 0, 3, 4, 0};
	char	dst1[10] = {-1, -1, 0, -1, -1, 0, 0, 0, 0, 0};
	char	src2[5] = {1, 0, 3, 4, 0};
	char	dst2[10] = {-1, -1, 0, -1, -1, 0, 0, 0, 0, 0};

	result = result && (ft_strlcat(dst1, src1, 5) == strlcat(dst2, src2, 5));
	for (int i = 0; i < 5; i++) {
		result = result && (src1[i] == src2[i]);
		result = result && (dst1[i] == dst2[i]);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	atoi_00(void)
{
	int		wstatus;

	if (fork() == 0) {
		ft_atoi(NULL);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(GREEN"[SEGFAULT]:\n");
	else
		printf(YELLOW"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	atoi_01(void)
{
	char	str[1] = {0};

	_ft_assert(ft_atoi(str) == atoi(str), RED);
	return (SUCCESS);
}

int	atoi_02(void)
{
	char	*str = "---+++--++-+-000123000a";

	_ft_assert(ft_atoi(str) == atoi(str), RED);
	return (SUCCESS);
}

int	atoi_03(void)
{
	char	*str = "/000123000a";

	_ft_assert(ft_atoi(str) == atoi(str), RED);
	return (SUCCESS);
}

int	atoi_04(void)
{
	char	*str = "2147483648";

	_ft_assert(ft_atoi(str) == atoi(str), RED);
	return (SUCCESS);
}

int	atoi_05(void)
{
	char	*str = "-2147483649";

	_ft_assert(ft_atoi(str) == atoi(str), RED);
	return (SUCCESS);
}

int	calloc_00(void)
{
	void	*ptr;
	int		wstatus;

	if (fork() == 0) {
		ptr = ft_calloc(0, 0);
		free(ptr);
		ptr = ft_calloc(1, 0);
		free(ptr);
		ptr = ft_calloc(0, 1);
		free(ptr);
		exit(EXIT_SUCCESS);
	}
	wait(&wstatus);
	if (!WIFEXITED(wstatus))
		printf(RED"[SEGFAULT]:\n");
	else
		printf(GREEN"[NO SEGFAULT]:\n");

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	calloc_01(void)
{
	_ft_assert(ft_calloc(10, (size_t)4294967295) == calloc(10, (size_t)4294967295), RED);
	return (SUCCESS);
}

// int	calloc_02(void)
// {
// 	int		result = 0;
// 	void	*ptr;
//
// 	ptr = ft_calloc(2, (size_t)4294967295);
// 	if (ptr) {
// 		result = 1;
// 		free(ptr);
// 	}
//
// 	_ft_assert(result , RED);
// 	return (SUCCESS);
// }

int	calloc_03(void)
{
	int		result = 1;
	void	*ptr;

	ptr = ft_calloc(2,2);
	for (int i = 0; i < 4; i++)
		result = result && (((char *)ptr)[i] == 0);

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
