#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello pointer for pointer\n");
	
	int x;
	printf("%d\n",x);
	int *pt = &x;
	printf("%p\n",pt);
	*pt = 50;
	printf("%d\n",x);
	
	int **ppt = &pt;
	printf("%p\n",ppt);
	
	**ppt = 100;
	printf("%d\n",x);
	
	int ***pppt = &ppt;
	***pppt = 333;
	printf("%d\n",x);
	
	
	return 0;
}
