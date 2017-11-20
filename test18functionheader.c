#include <stdio.h>
#include "test18functionheader.h"
int main(int argc, char **argv)
{
	printf("hello function\n");
	
	int x = 100;
	int y = 200;
	char z[] = "yangssem";
	
	test(x,y,z);
	
	printf("sum:%d\n",sum(x,y));
	
	printf("otherFileValue:%d\n",otherFileValue);
	
	return 0;
}


