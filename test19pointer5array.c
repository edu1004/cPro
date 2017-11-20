#include <stdio.h>


int main(int argc, char **argv)
{
	printf("hello pointer5 array\n");
	
	//sus == &sus[0]
	//*sus == sus[0]
	//*(sus+0) == sus[0]
	// pt+1 == pt + sizeof(*pt)
	//  pt[x] = arr[x]
	//  pt[x][i] = arr[x][i]
	// int (*pt)[col_max] = 2arr
	//  2arr>> row >> arr[0]
	
	int a = 10,b=20,c=30,d=40;
	int *ptr[4];//pt[x] = arr[x]
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;
	ptr[3] = &d;
	
	printf("%d %d %d %d\n", a,b,c,d);
	printf("%d %d %d %d\n", *ptr[0],*ptr[1],*ptr[2],*ptr[3]);
	
	return 0;
}
