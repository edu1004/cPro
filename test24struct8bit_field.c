#include <stdio.h>
typedef struct test{
	char a;
	char b;
	char c;
	int su1;
	int su2;
	int su3;
	int su4;
	char d;
	
} Test;

typedef struct bit_test{
	unsigned char a:1;
	char b:1;
	char c:1;
	int su1:1;
	int       :0;//
	int su3:3;//0111:0~7
	int su4:4;
	char d:1;
	
} Bit_test;


int main(int argc, char **argv){
	printf("struct bit field\n");
	printf("============= \n");
	
	Test t;//struct test t;
	printf("sizeof(t) : %d\n",sizeof(t));
	
	Bit_test bt;
	printf("sizeof(bt) : %d\n",sizeof(bt));
	
	return 0;
}



