#include <stdio.h>
#include <stdbool.h>
int main(int argc, char **argv)
{
	printf("hello array\n");
	
	
	int sus[] = {1,2,3,4,5};
	
	printf("sus[0]  %d\n", sus[0]);
	printf("sus[1]  %d\n", sus[1]);
	printf("sus[2]  %d\n", sus[2]);
	printf("sus[3]  %d\n", sus[3]);
	printf("sus[4]  %d\n", sus[4]);
	
	int i;
	for(i=0;i<(sizeof(sus)/sizeof(int));i++){
		printf("sus[%d]  %d\n", i,sus[i]);
	}
	
	//mission 
	int suss[2][3] = {{1,2,3},{4,5,6}};
	printf("suss  %d\n", sizeof(suss));
	int susslen = sizeof(suss)/sizeof(suss[0]);
	
	int x;
	for(x=0;x<susslen;x++){
		for(i=0;i<(sizeof(suss[x])/sizeof(int));i++){
			printf("suss %d\n", suss[x][i]);
		}
	}
	
	char names[3][10] = {"yangssem1","yangssem2","yangssem3"};
	printf("names  %d\n", sizeof(names));
	for(i=0;i<(sizeof(names)/sizeof(names[0]));i++){
			printf("name %s\n", names[i]);
	}
	
	bool bs[3] = {true, false, true};
	printf("bs  %d\n", sizeof(bs));
	for(i=0;i<sizeof(bs);i++){
			printf("bs %d\n", bs[i]);
	}
	
	
	
		
	return 0;
}

