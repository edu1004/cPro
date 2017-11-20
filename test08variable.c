#include <stdio.h>

int su = 0;
static int su2 = 44;
//header file : extern int su3 = 88;
const int su3 = 555;
int main(int argc, char **argv)
{
	printf("hello variable\n");
	
	printf("su %d\n",su);
	
	su = 11;
		
	printf("su %d\n",su);
	
	if(1){
		su = 22;
		printf("su %d\n",su);
		
		auto int su = 333;
		printf("su %d\n",su);
	}
	static int num = 99;
	printf("local static num %d\n",num);
	printf("global static su2 %d\n",su2);
	
	
	register int total = 100;//cpu speed up
	printf("register total %d\n",total);
	
	volatile int total2 = 1000;//memory speed up
	printf("volatile total2 %d\n",total2);
	
	printf("const su3 %d\n",su3);
	//su3 = 666;//read only error
	
	return 0;
}

