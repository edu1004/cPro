#include <stdio.h>
int main(int argc, char **argv)
{
	printf("hello type\n");

	int su = 100;//2byte or 4byte
	printf("su: %d\n",su);
	
	unsigned int su2 = -200;
	printf("unsigned su2: %u\n",su2);
	
	char c = 'a';
	printf("c : %c\n",c);
	
	unsigned char c2 = 'a';
	printf("unsigned c2 : %u\n",c2);
	
	short s1 = 40000;
	printf("s1 : %d\n",s1);
	
	unsigned short s2 = 40000;
	printf("unsigned s2 : %u\n",s2);
	
	long lng1  = 2200000000;
	printf("lng1 : %ld\n",lng1);
	
	unsigned long lng2 = -2100000000;//4byte
	printf("unsigned lng2 : %lu\n",lng2);
	
	float f = 3.141592f;
	printf("f : %f\n",f);
	printf("f : %.2f\n",f);
	
	double d = 3.141592;
	printf("d : %lf\n",d);
	printf("d : %.2lf\n",d);
	
	return 0;
}

