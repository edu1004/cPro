#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//gcc compile or build : add -lm
int main(int argc, char **argv)
{
	printf("hello math\n");
	
	int x = 2;
	int y = 8;
	printf("pow(2,8): %.2f\n",pow(x,y));
	
	int h = 100;
	printf("sqrt(100): %.2f\n",sqrt(h));
	
	//#include <stdlib.h>
	printf("abs(-111): %d\n",abs(-111));
	
	printf("ceil(-99.99): %f\n",ceil(-99.99));
	printf("ceil(99.99): %f\n",ceil(99.99));
	printf("floor(99.99): %f\n",floor(99.99));
	printf("floor(-99.99): %f\n",floor(-99.99));
	
	////#include <stdlib.h>
	srand(time(NULL));//seed value setup 1970/01/01~
	int i;
	for(i=0;i<10;i++){
		printf("rand %d\n", rand()%10);
	}
	
	
	return 0;
}

