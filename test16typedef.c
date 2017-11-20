#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello typedef\n");
	
	typedef int INT;
	INT x = 10;
	printf("typedef INT x:%d\n",x);
	
	typedef unsigned int Uint;
	Uint y = -999;
	printf("typedef Uint y:%u\n",y);
	
	return 0;
}

