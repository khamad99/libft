#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char fstrmapi(unsigned int i, char c)
{
	printf("index = %d is %c\n", i, c);
	return (ft_toupper(c));
}

void fstriteri(unsigned int i, char *c)
{
	printf("index = %d is %c\n", i, *c);
	*c = *c - 32;
}

int main (void)
{
	int a = 's';
	printf("ft_isalpha\n");
	printf("%d\n", isalpha(a));
	printf("%d\n", ft_isalpha(a));

	int b = 'q';
	printf("ft_isdigit\n");
	printf("%d\n", isdigit(b));
	printf("%d\n", ft_isdigit(b));

	int c = '$';
	printf("ft_isalnum\n");
	printf("%d\n", isalnum(c));
	printf("%d\n", ft_isalnum(c));

	int d = 8;
	printf("ft_isascii\n");
	printf("%d\n", isascii(d));
	printf("%d\n", ft_isascii(d));

	int e = 31;
	printf("ft_isprint\n");
	printf("%d\n", isprint(e));
	printf("%d\n", ft_isprint(e));

	char *s = "-1uagiubcuasbciusbcufuyaywfwyueiqefbowbcwubciwbci";
	printf("ft_strlen\n");
	printf("%lu\n", strlen(s));
	printf("%lu\n", ft_strlen(s));

	char j[10] = "123456789";
	printf("ft_memset\n");
	printf("%s\n", (char *) memset(j, '$', 9));
	printf("%s\n", (char *) ft_memset(j, '$', 9));

	char k[99] = "seeonenviesnvsierneinciuerncreiu";
	char m[99] = "seeonenviesnvsierneinciuerncreiu";
	printf("ft_bzero\n");
	printf("%s\n", (char *) bzero(k, 1));
	ft_bzero(m, 1);
	printf("%s\n", m);

	char kk[99] = "I am going from Dubai to AbuDhabi";
	char mm[99] = "I am going from Dubai to AbuDhabi";

	printf("ft_memcpy\n");
	memcpy(kk + 5, kk + 11, 40);
	printf("%s\n", kk);
	ft_memcpy(mm + 5, mm + 11, 40);
	printf("%s\n", mm);

	char kk1[99] = "I am going from Dubai to AbuDhabi";
	char mm1[99] = "I am going from Dubai to AbuDhabi";
	printf("ft_memmove\n");
	memmove(kk1 + 5, kk1 + 11, 40);
	printf("%s\n", kk1);
	ft_memmove(mm1 + 5, mm1 + 11, 40);
	printf("%s\n", mm1);

	char kk2[99] = "";
	char kk3[99] = "1122333333333333333333333333333333333";
	char mm2[99] = "";
	char mm3[99] = "1122333333333333333333333333333333333";
	printf("ft_strlcpy\n");
	size_t t = strlcpy(kk3, kk2, 0);
	printf("%s - %zu\n", kk3, t);
	size_t q = ft_strlcpy(mm3, mm2, 0);
	printf("%s - %zu\n", mm3, q);

	char kk4[99] = "I am";
	char kk5[99] = "123456789123456789123456789123456789123456789123456789";
	char mm4[99] = "I am";
	char mm5[99] = "123456789123456789123456789123456789123456789123456789";
	printf("ft_strlcat\n");
	size_t tt = strlcat(kk5, kk4, 20);
	printf("%s - %zu\n", kk5, tt);
	size_t qq = ft_strlcat(mm5, mm4, 20);
	printf("%s - %zu\n", mm5, qq);

	printf("ft_toupper\n");
	printf("%c\n", toupper('a'));
  	printf("%c\n", ft_toupper('a'));

	printf("ft_tolower\n");
	printf("%c\n", tolower('Z'));
	printf("%c\n", ft_tolower('Z'));

	printf("ft_strchr\n");
	printf("%s\n", strchr("42 abu Dhabi", 'a'));
	printf("%s\n", ft_strchr("42 abu Dhabi", 'a'));

	printf("ft_strrchr\n");
	printf("%s\n", strrchr("42 abu Dhabbai", 'b'));
	printf("%s\n", ft_strrchr("42 abu Dhabbai", 'b'));

	printf("ft_strncmp\n");
  	printf("%d\n", strncmp("aBCD", "ABcd", 2));
	printf("%d\n", ft_strncmp("aBCD", "ABcd", 2));

	printf("ft_memchr\n");
	printf("%s\n", (char *) memchr("42 abu Dhabi", '2', 1));
	printf("%s\n", (char*) ft_memchr("42 abu Dhabi", '2', 1));

	printf("ft_memcmp\n");
	printf("%d\n", memcmp("ABCD", "ABcd", 0));
	printf("%d\n", ft_memcmp("ABCD", "ABcd", 0));

	printf("ft_strnstr\n");
	printf("%s\n", strnstr("ABCD", "CDERRTR", 50));
	printf("%s\n", ft_strnstr("ABCD", "CDERRTR", 50));

	printf("ft_atio\n");
	printf("%d\n", atoi("   -50"));
	printf("%d\n", ft_atoi("   -50"));

	printf("ft_calloc\n");
	printf("%s\n", (char *) calloc(2, 2));
	printf("%s\n", (char *) ft_calloc(2, 2));

	printf("ft_strdup\n");
	printf("%s\n", strdup("123456789"));
	printf("%s\n", ft_strdup("123456789"));

	printf("ft_substr\n");
  	printf("%s\n", ft_substr("hi omer", 6, 1));

	printf("ft_strjoin\n");
	printf("%s\n", ft_strjoin("hi omer ", "hi hi"));

	printf("ft_strtrim\n");
  	printf("%s\n", ft_strtrim("abqbc", "abc"));
	printf("%s\n", ft_strtrim("xavocaxxdoxyyyyyyyyyyz", "xyz"));

	printf("ft_split\n");
  	char	**tabb;
	unsigned int	yu;

	yu = 0;
	tabb = ft_split("hello, 42 abu dhabi, 1234, 789 ", ',');
	while (tabb[yu] != NULL)
	{
		ft_putendl_fd(tabb[yu], 1);
		yu++;
	}

	printf("ft_itoa\n");
  	printf("%s\n", ft_itoa(123456));
  	printf("%s\n", ft_itoa(2147483647));

	printf("ft_strmapi\n");
  	char str[10] = "hello";
	printf("%s\n", str);
	char *r = ft_strmapi(str, fstrmapi);
	printf("%s\n", r);
	
	printf("ft_striteri\n");
	char str2[10] = "hello";
	ft_striteri(str2, fstriteri);
	printf("%s\n", str2);

	printf("ft_putchar_fd\n");
	ft_putchar_fd('c', 1);
	printf("\n");

	printf("ft_putstr_fd\n");
	ft_putstr_fd("Hello", 1);
	printf("\n");

	printf("ft_putendl_fd\n");
	ft_putendl_fd("Hello", 1);

	printf("ft_putnbr_fd\n");
	ft_putnbr_fd(12345690, 1);
	printf("\n");


}
