#include <stdio.h>

#define LED 4
#define sum(a) ((a##1)+(a##2)+(a##3))
#define print(a) printf("%d * %d = %d\n", a##x,a##y,((a##x)*(a##y)))

int main(int argc, char **argv)
{
	printf("hello define\n");
	
	printf("define LED : %d\n", LED);
	
	int d1=10, d2=20,d3=30;
	
	printf("define sum : %d\n", sum(d));
	
	int dx=100,dy=200;
	print(d);
	
	printf("inner define __DATE__ : %s\n", __DATE__);
	printf("inner define __TIMESTAMP__ : %s\n", __TIMESTAMP__);
	printf("inner define __TIME__ : %s\n", __TIME__);
	printf("inner define __FILE__ : %s\n", __FILE__);
	printf("inner define __LINE__ : %d\n", __LINE__);
	
	return 0;
}

