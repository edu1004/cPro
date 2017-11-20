#include <stdio.h>
#define MAX 3

void printArr(int sus[MAX]);
void printArr2(int *sus);
int main(int argc, char **argv)
{
	printf("hello pointer array\n");
	
	int sus[MAX] = {11,22,33};
	printf("sus : %p\n",sus);
	printf("*sus : %d\n",*sus);
	printf("&sus[0]: %p\n",&sus[0]);
	printf("sus[0]: %d\n",sus[0]);
	
	printf("&sus[1]:%p\n",&sus[1]);
	printf("&sus[2]:%p\n",&sus[2]);
	
	printf("*(sus+0) : %d\n",*(sus+0));
	printf("*(sus+1) : %d\n",*(sus+1));
	printf("*(sus+2) : %d\n",*(sus+2));
	printf("sus[0]: %d\n",sus[0]);
	printf("sus[1]: %d\n",sus[1]);
	printf("sus[2]: %d\n",sus[2]);

	printArr(sus);
	printArr2(sus);
	return 0;
}
void printArr(int sus[MAX]){
	printf("printArr: %p\n",sus);
	int i;
	for(i=0;i<MAX;i++){
		printf("for: %p %d\n", &sus[i], sus[i]);
	}
}

void printArr2(int *sus){
	printf("printArr2: %p\n",sus);
	int i;
	for(i=0;i<MAX;i++){
		printf("for2: %p %d\n", sus+i, *(sus+i));
	}
}

