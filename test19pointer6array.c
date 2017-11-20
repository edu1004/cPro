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
	
	int arr[4] = {10,20,30,40};
	int *ptr[4];//pt[x] = arr[x]
	
	int i;
	for(i=0;i<4;i++){
		ptr[i] = &arr[i];
	}
	
	printf("%d %d %d %d\n", *ptr[0],*ptr[1],*ptr[2],*ptr[3]);
	
	
	for(i=0;i<4;i++){
		printf("%d ",*ptr[i]);
	}
	printf("\n");
	
	return 0;
}
