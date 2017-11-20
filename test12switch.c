#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("hello switch\n");
	
	int x = 10;
	switch(x){
	case 10:
			printf("%d\n",x);
			goto EXIT;
	case 9:
			printf("%d\n",x);	
			break;
	default:
			printf("default...\n");	
			break;
	}
	
	printf("end switch...%d\n",__LINE__);	
	
	EXIT: printf("EXIT...%d\n",__LINE__);	
	return 0;
}

