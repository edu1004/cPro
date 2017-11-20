#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("hello while\n");
	
	int x = 0;
	
	while(x<10){
		printf("while: %d\n",x);
		if(x != 0 && x%4==0){
			break;
		}else if(x > 2){
			break;	
		}
		++x;
	}
		
	return 0;
}

