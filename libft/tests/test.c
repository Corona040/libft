/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecorona- <ecorona-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:52:23 by ecorona-          #+#    #+#             */
/*   Updated: 2024/10/25 22:41:12 by ecorona-         ###   ########.fr       */
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
int	strnstr_06(void);
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
int	calloc_04(void);
int	strdup_00(void);
int	strdup_01(void);
int	strdup_02(void);
int	strdup_03(void);
int	substr_00(void);
int	substr_01(void);
int	substr_02(void);
int	substr_03(void);
int	substr_04(void);
int	strjoin_00(void);
int	strjoin_01(void);
int	strjoin_02(void);
int	strjoin_03(void);
int	strjoin_04(void);
int	strtrim_00(void);
int	strtrim_01(void);
int	strtrim_02(void);
int	strtrim_03(void);
int	split_00(void);
int	split_01(void);
int	split_02(void);
int	split_03(void);
int	itoa_00(void);
int	itoa_01(void);
int	itoa_02(void);
int	itoa_03(void);
int	strmapi_00(void);
int	strmapi_01(void);
int	strmapi_02(void);
int	strmapi_03(void);
int	striteri_00(void);
int	striteri_01(void);
int	striteri_02(void);
int	putchar_fd_00(void);
int	putchar_fd_01(void);
int	putstr_fd_00(void);
int	putstr_fd_01(void);
int	putendl_fd_00(void);
int	putendl_fd_01(void);
int	putnbr_fd_00(void);
int	putnbr_fd_01(void);
int	putnbr_fd_02(void);
int	putnbr_fd_03(void);

int	tests_run = 0;
test_suite	tests = {
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
					strnstr_00, strnstr_01, strnstr_02, strnstr_03, strnstr_04, strnstr_05, strnstr_06,
					strlcpy_00, strlcpy_01, strlcpy_02, strlcpy_03,
					strlcat_00, strlcat_01, strlcat_02, strlcat_03,
					atoi_00, atoi_01, atoi_02, atoi_03, atoi_04,
					// calloc_00, calloc_01, calloc_02, calloc_03,
					calloc_00, calloc_01, calloc_03, calloc_04,
					strdup_00, strdup_01, strdup_02, strdup_03,
					substr_00, substr_01, substr_02, substr_03, substr_04,
					strjoin_00, strjoin_01, strjoin_02, strjoin_03, strjoin_04,
					strtrim_00, strtrim_01, strtrim_02, strtrim_03,
					split_00, split_01, split_02, split_03,
					itoa_00, itoa_01, itoa_02, itoa_03,
					strmapi_00, strmapi_01, strmapi_02, strmapi_03,
					striteri_00, striteri_01, striteri_02,
					putchar_fd_00, putchar_fd_01,
					putstr_fd_00, putstr_fd_01,
					putendl_fd_00, putendl_fd_01,
					putnbr_fd_00, putnbr_fd_01, putnbr_fd_02, putnbr_fd_03,
					NULL
				};

// compare to original from EOF to max unsigned char
int	isalpha_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isalpha(i) > 0) == (isalpha(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isdigit_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isdigit(i) > 0) == (isdigit(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isalnum_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isalnum(i) > 0) == (isalnum(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isascii_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isascii(i) > 0) == (isascii(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	isprint_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && ((ft_isprint(i) > 0) == (isprint(i) > 0));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	toupper_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && (ft_toupper(i) == toupper(i));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// compare to original from EOF to max unsigned char
int	tolower_00(void)
{
	_ft_announce();

	int	result = 1;

	for (int i = -1; i < 256; i++)
		result = result && (ft_tolower(i) == tolower(i));

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	strlen_00(void)
{
	_ft_announce();

	ft_strlen(NULL);

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
	_ft_announce();

	ft_strchr(NULL, 0);

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
	_ft_announce();

	ft_strrchr(NULL, 0);

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
	_ft_announce();

	char	str[1] = {0};

	ft_strncmp(NULL, NULL, 1);
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
	_ft_announce();

	char	str[1] = {0};

	ft_memcmp(NULL, NULL, 1);
	ft_memcmp(NULL, NULL, 1);
	ft_memcmp(NULL, str, 1);
	ft_memcmp(str, NULL, 1);

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
	_ft_announce();

	ft_memset(NULL, 1, 1);

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
	_ft_announce();

	ft_memchr(NULL, 0, 1);

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
	_ft_announce();

	ft_bzero(NULL, 1);

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
	_ft_announce();

	char	str[1] = {0};

	ft_memcpy(NULL, NULL, 1);
	ft_memcpy(NULL, str, 1);
	ft_memcpy(str, NULL, 1);

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
	_ft_announce();

	char	str[1] = {0};

	ft_memmove(NULL, NULL, 1);
	ft_memmove(NULL, str, 1);
	ft_memmove(str, NULL, 1);

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
	int		result = 1;

	str = malloc(n * sizeof(char));
	if (str) {
		bzero(str, n);
		ft_memmove(str + 1, str, n - 1);
		free(str);
	}

	_ft_assert(result, RED);
	return (SUCCESS);
}

// check null handling
int	strnstr_00(void)
{
	_ft_announce();

	char	str[1] = {-1};

	ft_strnstr(NULL, NULL, 1);
	ft_strnstr(NULL, str, 1);
	ft_strnstr(str, NULL, 1);

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
	char	little[4] = {1, 2, 3, 0};
	char	big[10] = {1, 2, 1, 3, 1, 2, 1, 2, 3, 2};

	_ft_assert(ft_strnstr(big, little, -1) == strnstr(big, little, -1), RED);
	return (SUCCESS);
}

int	strnstr_05(void)
{
	char	little[4] = {1, 2, 3, 0};
	char	big[10] = {1, 2, 1, 3, 1, 2, 1, 2, 3, 2};

	_ft_assert(ft_strnstr(big, little, 8) == strnstr(big, little, 8), RED);
	return (SUCCESS);
}

int	strnstr_06(void)
{
	char	little[4] = {1, 2, 3, 0};
	char	big[10] = {1, 2, 1, 3, 1, 2, 1, 2, 3, 2};

	_ft_assert(ft_strnstr(big, little, 9) == strnstr(big, little, 9), RED);
	return (SUCCESS);
}

int	strlcpy_00(void)
{
	_ft_announce();

	char	str[1] = {-1};

	ft_strlcpy(NULL, NULL, 1);
	ft_strlcpy(NULL, str, 1);
	ft_strlcpy(str, NULL, 1);

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
	_ft_announce();

	char	str[1] = {-1};

	ft_strlcat(NULL, NULL, 1);
	ft_strlcat(NULL, str, 1);
	ft_strlcat(str, NULL, 1);

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
	_ft_announce();

	ft_atoi(NULL);

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
	_ft_announce();

	void	*ptr;

	ptr = ft_calloc(0, 0);
	if (ptr)
		free(ptr);
	ptr = ft_calloc(1, 0);
	if (ptr)
		free(ptr);
	ptr = ft_calloc(0, 1);
	if (ptr)
		free(ptr);

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

int	calloc_04(void)
{
	void	*ptr;

	fail_malloc = true;
	ptr = ft_calloc(2, 2);

	_ft_assert(ptr == NULL, RED);
	if (ptr)
		free(ptr);
	return (SUCCESS);
}

int	strdup_00(void)
{
	_ft_announce();

	ft_strdup(NULL);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strdup_01(void)
{
	char	str[1] = {0};
	void	*res1;
	void	*res2;

	res1 = ft_strdup(str);
	res2 = strdup(str);
	_ft_assert(((res1 != NULL) == (res2 != NULL)) && !strcmp(res1 , res2), RED);
	if (res1)
		free(res1);
	if (res2)
		free(res2);
	return (SUCCESS);
}

int	strdup_02(void)
{
	char	str[5] = {-1, 1, 1, -1, 0};
	void	*res1;
	void	*res2;

	res1 = ft_strdup(str);
	res2 = strdup(str);
	_ft_assert(((res1 != NULL) == (res2 != NULL)) && !strcmp(res1 , res2), RED);
	if (res1)
		free(res1);
	if (res2)
		free(res2);
	return (SUCCESS);
}

int	strdup_03(void)
{
	char	str[5] = {-1, 1, 1, -1, 0};
	void	*ptr;

	fail_malloc = true;
	ptr = ft_strdup(str);

	_ft_assert(ptr == NULL, RED);
	if (ptr)
		free(ptr);
	return (SUCCESS);
}

int	substr_00(void)
{
	_ft_announce();

	char	*substr;

	substr = ft_substr(NULL, 0, 1);
	if (substr)
		free(substr);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	substr_01(void)
{
	char	*substr;
	char	str[10] = {-1, 1, 2, 3, 4, 5, 6, 0, 1, 1};

	substr = ft_substr(str, 0, 0);
	free(substr);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	substr_02(void)
{
	char	*substr;
	char	str[10] = {-1, 1, 2, 3, 4, 5, 6, 0, 1, 1};
	int		result = 1;

	substr = ft_substr(str, 0, -1);
	result = !strcmp(substr, str);
	free(substr);

	_ft_assert(result , RED);
	return (SUCCESS);
}

int	substr_03(void)
{
	char	*substr;
	char	str[10] = {-1, 1, 2, 3, 4, 5, 6, 0, 1, 1};
	int		result = 1;

	substr = ft_substr(str, 2, 4);
	for (int i = 0; i < 4; i++)
		result = result && (substr[i] == str[2 + i]);
	result = result && (substr[2 + 4] == 0);
	free(substr);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	substr_04(void)
{
	char	*substr;

	fail_malloc = true;
	substr = ft_substr("hello", 1, 1);

	_ft_assert(substr == NULL, RED);
	if (substr)
		free(substr);
	return (SUCCESS);
}

int	strjoin_00(void)
{
	_ft_announce();

	char	str[1] = {0};
	char	*strjoin;

	strjoin = ft_strjoin(NULL, NULL);
	if (strjoin)
		free(strjoin);
	ft_strjoin(str, NULL);
	if (strjoin)
		free(strjoin);
	ft_strjoin(NULL, str);
	if (strjoin)
		free(strjoin);
	ft_strjoin(str, str);
	if (strjoin)
		free(strjoin);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strjoin_01(void)
{
	char	str1[4] = {-1, 1, 2, 0};
	char	str2[7] = {-1, 1, 2, 3, 4, 5, 0};
	char	res[10] = {-1, 1, 2, -1, 1, 2, 3, 4, 5, 0};
	char	*strjoin;
	int		result = 1;

	strjoin = ft_strjoin(str1, str2);
	result = result && (!strcmp(strjoin, res));
	free(strjoin);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strjoin_02(void)
{
	char	str1[1] = {0};
	char	str2[7] = {-1, 1, 2, 3, 4, 5, 0};
	char	*strjoin;
	int		result = 1;

	strjoin = ft_strjoin(str1, str2);
	result = result && (!strcmp(strjoin, str2));
	free(strjoin);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strjoin_03(void)
{
	char	str1[1] = {0};
	char	str2[7] = {-1, 1, 2, 3, 4, 5, 0};
	char	*strjoin;
	int		result = 1;

	strjoin = ft_strjoin(str2, str1);
	result = result && (!strcmp(strjoin, str2));
	free(strjoin);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strjoin_04(void)
{
	char	*strjoin;

	fail_malloc = true;
	strjoin = ft_strjoin("he", "llo");

	_ft_assert(strjoin == NULL, RED);
	if (strjoin)
		free(strjoin);
	return (SUCCESS);
}

int	strtrim_00(void)
{
	_ft_announce();

	char	str[1] = {0};
	char	*trim;

	trim = ft_strtrim(NULL, NULL);
	if (trim)
		free(trim);
	trim = ft_strtrim(str, NULL);
	if (trim)
		free(trim);
	trim = ft_strtrim(NULL, str);
	if (trim)
		free(trim);
	trim = ft_strtrim(str, str);
	if (trim)
		free(trim);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	strtrim_01(void)
{
	char	str[4] = {1,2,3,0};
	char	set[1] = {0};
	char	*strtrim;
	int		result = 1;

	strtrim = ft_strtrim(str, set);
	result = result && (!strcmp(strtrim, str));
	free(strtrim);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strtrim_02(void)
{
	char	str[10] = {-3, -1, 2, -2, -1, 5, -2, -1, 0};
	char	set[4] = {-1, -2, -3, 0};
	char	res[5] = {2, -2, -1, 5, 0};
	char	*trim;
	int		result = 1;

	trim = ft_strtrim(str, set);
	result = result && (!strcmp(trim, res));
	free(trim);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strtrim_03(void)
{
	char	*strtrim;

	fail_malloc = true;
	strtrim = ft_strtrim("abba","a");

	_ft_assert(strtrim == NULL, RED);
	if (strtrim)
		free(strtrim);
	return (SUCCESS);
}

int	split_00(void)
{
	_ft_announce();


	ft_split(NULL, 1);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	split_01(void)
{
	char	str[2] = {1, 0};

	ft_split(str, 0);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	split_02(void)
{
	char	str[10] = {2, 1, 2, 1, 2, 1, 1, 1, 2, 0};
	char	res[4][4] = {{1,0}, {1,0}, {1,1,1,0}, {0}};
	char	**split;
	int		result = 1;

	split = ft_split(str, 2);
	for (int i = 0; split[i]; i++) {
		result = result && (!strcmp(split[i], res[i]));
		free(split[i]);
	}
	free(split);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	split_03(void)
{
	char	**split;

	fail_malloc = true;
	split = ft_split("  ha ha ha  ", ' ');

	_ft_assert(split == NULL, RED);
	if (split) {
		for (int i = 0; split[i]; i++)
			free(split[i]);
		free(split);
	}
	return (SUCCESS);
}

int	itoa_00(void)
{
	_ft_announce();

	char	*a;
	int		result = 1;

	a = ft_itoa(INT_MAX);
	result = result && (!strcmp(a, "2147483647"));
	free(a);
	a = ft_itoa(INT_MIN);
	result = result && (!strcmp(a, "-2147483648"));
	free(a);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	itoa_01(void)
{
	char	*a;
	int		result = 1;

	a = ft_itoa(0);
	result = result && (!strcmp(a, "0"));
	free(a);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	itoa_02(void)
{
	char	*a;
	int		result = 1;

	a = ft_itoa(15);
	result = result && (!strcmp(a, "15"));
	free(a);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	itoa_03(void)
{
	char	*a;

	fail_malloc = true;
	a = ft_itoa(10);

	_ft_assert(a == NULL, RED);
	return (SUCCESS);
}

char	strmapi_toupper(unsigned int i, char c)
{
	(void)i;
	return (toupper(c));
}

int	strmapi_00(void)
{
	_ft_announce();

	char	str[1] = {0};
	char	*map;
	int		result = 1;

	map = ft_strmapi(NULL, NULL);
	result = result && (map == NULL);
	map = ft_strmapi(str, NULL);
	result = result && (map == NULL);
	map = ft_strmapi(NULL, strmapi_toupper);
	result = result && (map == NULL);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strmapi_01(void)
{
	char	str[1] = {0};
	char	*map;
	int		result = 1;

	map = ft_strmapi(str, strmapi_toupper);
	result = result && (*map == 0);
	free(map);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strmapi_02(void)
{
	char	str[10] = "a1b-hello";
	char	*map;
	char	res[10] = "A1B-HELLO";
	int		result = 1;

	map = ft_strmapi(str, strmapi_toupper);
	result = result && (!strcmp(res, map));
	free(map);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	strmapi_03(void)
{
	char	str[10] = "a1b-hello";
	char	*map;
	int		result = 1;


	fail_malloc = true;
	map = ft_strmapi(str, strmapi_toupper);
	result = result && (map == NULL);
	if (map)
		free(map);

	_ft_assert(result, RED);
	return (SUCCESS);
}

void	striteri_toupper(unsigned int i, char *c)
{
	(void)i;
	*c = toupper(*c);
}

int	striteri_00(void)
{
	_ft_announce();

	char	str[1] = {0};

	ft_striteri(NULL, NULL);
	ft_striteri(str, NULL);
	ft_striteri(NULL, striteri_toupper);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	striteri_01(void)
{
	char	str[1] = {0};
	int		result = 1;

	ft_striteri(str, striteri_toupper);
	result = result && (*str == 0);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	striteri_02(void)
{
	char	str[10] = "a1b-hello";
	char	res[10] = "A1B-HELLO";
	int		result = 1;

	ft_striteri(str, striteri_toupper);
	result = result && (!strcmp(res, str));

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	putchar_fd_00(void)
{
	_ft_announce();


	ft_putchar_fd(0, -1);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	putchar_fd_01(void)
{
	int		pipefd[2];
	char	buf[1];

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putchar_fd(42, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);
	while (read(pipefd[0], &buf, 1) > 0)
		;
	close(pipefd[0]);

	_ft_assert(*buf == 42, RED);
	return (SUCCESS);
}

int	putstr_fd_00(void)
{
	_ft_announce();


	ft_putchar_fd(0, -1);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	putstr_fd_01(void)
{
	int		pipefd[2];
	char	buf[1];
	char	*str = "Hello";
	int		result = 1;

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putstr_fd(str, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);

	int	i = 0;
	while (read(pipefd[0], &buf, 1) > 0) {
		result = result && (*buf == str[i]);
		i++;
	}
	close(pipefd[0]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	putendl_fd_00(void)
{
	_ft_announce();


	ft_putendl_fd(0, -1);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	putendl_fd_01(void)
{
	int		pipefd[2];
	char	buf[1];
	char	*str = "Hello";
	int		result = 1;

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putstr_fd(str, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);

	int	i = 0;
	while (read(pipefd[0], &buf, 1) > 0) {
		if (i < 5)
			result = result && (*buf == str[i]);
		else
			result = result && (*buf == '\n');
		i++;
	}
	close(pipefd[0]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	putnbr_fd_00(void)
{
	_ft_announce();

	ft_putnbr_fd(0, -1);

	_ft_assert(1, RED);
	return (SUCCESS);
}

int	putnbr_fd_01(void)
{
	int		pipefd[2];
	char	buf[1];
	int		nbr = 42;
	int		result = 1;

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putnbr_fd(nbr, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);

	int	i = 0;
	while (read(pipefd[0], &buf, 1) > 0) {
		result = result && (*buf == "42"[i]);
		i++;
	}
	close(pipefd[0]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	putnbr_fd_02(void)
{
	int		pipefd[2];
	char	buf[1];
	int		nbr = INT_MAX;
	int		result = 1;

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putnbr_fd(nbr, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);

	int	i = 0;
	while (read(pipefd[0], &buf, 1) > 0) {
		result = result && (*buf == "2147483647"[i]);
		i++;
	}
	close(pipefd[0]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	putnbr_fd_03(void)
{
	int		pipefd[2];
	char	buf[1];
	int		nbr = INT_MIN;
	int		result = 1;

	pipe(pipefd);
	if (fork() == 0) {
		close(pipefd[0]);
		ft_putnbr_fd(nbr, pipefd[1]);
		close(pipefd[1]);
		exit(EXIT_SUCCESS);
	}
	close(pipefd[1]);

	int	i = 0;
	while (read(pipefd[0], &buf, 1) > 0) {
		result = result && (*buf == "-2147483648"[i]);
		i++;
	}
	close(pipefd[0]);

	_ft_assert(result, RED);
	return (SUCCESS);
}

int	ft_test_env(unit_test test)
{
	char	buf[32];
	int		exit_code;
	int		wstatus;

	memset(buf, 0, 32);
	if (fork() == 0) {
		exit_code = test();
		exit(exit_code);
	}
	wait(&wstatus);
	if (WIFEXITED(wstatus))
		return (WEXITSTATUS(wstatus));
	else {
		sprintf(buf, YELLOW"%-5s ", " O-O ");
		write(STDOUT_FILENO, buf, strlen(buf));
	}
	return (CRASH);
}

int	unit_test_suite(test_suite tests)
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
		printf(GREEN"\nPASSED\n");
	else
		printf(RED"FAILED: %d\n", result);
	printf(DFLT"Tests run: %d\n", tests_run);

	return (result);
}
