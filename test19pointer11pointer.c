#include <stdio.h>
void test(int *pt);
void test2(int **ppt);
int main(int argc, char **argv)
{
	printf("hello pointer for pointer\n");
	
	int arrs[2][3] = { {1,2,3} , {4,5,6} };
	
	int (*row)[3] = arrs;
	printf("%p\n",row);
	
	int *pt = (int *)arrs;
	printf("%p\n",pt);
	test((int *)arrs);
	
	int **ppt = (int **)arrs;
	printf("%p\n",ppt);
	test2((int **)arrs);
	
	return 0;
}
void test(int *pt){}
void test2(int **ppt){}
