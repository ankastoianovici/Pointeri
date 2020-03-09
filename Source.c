#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *n, *s, *nr;
	n = (int*)malloc(sizeof(int));
	printf("n=");
	scanf("%d", n);
	if (n == NULL)
		printf("Eroare la alocarea de memorie!!!");
	s= (int*)malloc(sizeof(int));
	nr= (int*)malloc(sizeof(int));
	*s = 0;
	*nr = 1;
	while (*nr<=*n)
	{
		*s = *s + (*nr);
		(*nr)++;
	}
	printf("%d\n", *s);
	system("pause");
	return 0;
}