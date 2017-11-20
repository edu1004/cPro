#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("hello if else for goto\n");
	
	int x, i;
	for(x=0;x<10;x++){
		printf("%d:",x);
		for(i=0;i<10;i++){
			if(x==5) break;
			printf("%d",i);
		}
		printf("\n");
	}
	
	for(x=0;x<10;x++){
		printf("%d:",x);
		for(i=0;i<10;i++){
			if(i==5) continue;
			printf("%d",i);
		}
		printf("\n");
	}
	
	for(x=0;x<10;x++){
		printf("%d:",x);
		for(i=0;i<10;i++){
			if(i==5) goto EXIT;
			printf("%d",i);
		}
		printf("\n");
	}
	
	EXIT : printf("EXIT....\n");
	
	
	return 0;
}

