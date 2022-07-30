#include "libft.h"
#include <stdio.h>

void dft_lstdelone(void *uuu)
{
	free(uuu);
}

void dft_lstclear(void *yyy)
{
	free(yyy);
}

void dft_lstiter(void *qwe)
{
	*((char *) qwe) = 'q';
}

void * fft_lstmap(void *lstt)
{
	*((char *)lstt) = 'a';
	return (lstt);
}

int main (void)
{
	printf("ft_lstnew\n");
	char	*strrt = "i am the first one";
	t_list	*eree;
	eree = ft_lstnew((void *)strrt);
	printf("content : %s\n", (char *)eree->content);

	printf("ft_lstadd_front\n");
	t_list *one = ft_lstnew(ft_strdup("old one"));
	ft_lstadd_front(&one, eree);
	printf("content : %s\n", (char *)one->content);
	printf("content : %s\n", (char *)one->next->content);

	printf("ft_lstsize\n");
	printf("%d\n", ft_lstsize(one));

	printf("ft_lstlast\n");
	t_list *ttr = ft_lstlast(one);
	printf("%s\n", (char *)ttr->content);
	
	printf("ft_lstadd_back\n");
	t_list *yty;
	yty = ft_lstnew("i will be the last node");
	t_list *latt;
	ft_lstadd_back(&one, yty);
	latt = ft_lstlast(one);
	printf("%s\n", (char *)latt->content);

	printf("ft_lstdelone\n");
	t_list *abc = ft_lstnew(ft_strdup("hello"));
	printf("%s\n", (char *)abc->content);
	ft_lstdelone(abc, dft_lstdelone);
	printf("%s\n", (char *)abc->content);

	printf("ft_lstclear\n");
	t_list *l = ft_lstnew(ft_strdup("one"));
	l->next = ft_lstnew(ft_strdup("two"));
	ft_lstclear(&l, dft_lstdelone);
	if(!l)
		printf("Done\n");
	else
		printf("false\n");

	printf("ft_lstiter\n");
	t_list *op = ft_lstnew(ft_strdup("h"));
	op->next = ft_lstnew(ft_strdup("u"));
	ft_lstiter(op, dft_lstiter);
	printf("%s\n%s\n", (char *)op->content, (char *)op->next->content);

	printf("ft_lstmap\n");
	t_list *ppo;
	t_list *ow = ft_lstnew(ft_strdup("h"));
	ow->next = ft_lstnew(ft_strdup("u"));
	ppo = ft_lstmap(ow, fft_lstmap, dft_lstclear);
	printf("%s\n%s\n", (char *)ppo->content, (char *)ppo->next->content);

}
