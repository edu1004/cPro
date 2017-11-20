#include <stdio.h>

void test();
int main(int argc, char **argv)
{
	printf("hello function\n");
	
	int x = 100;
	int y = 200;
	char z[] = "yangssem";
	
	test(x,y,z);
	
	return 0;
}
void test(int x,int y,char z[]){
	printf("%d,%d,%s\n",x,y,z);
	
}

