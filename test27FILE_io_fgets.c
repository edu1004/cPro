#include <stdio.h>
#define nil NULL //nil==0,NULL==0
#define MAX 2048
int main(int argc, char **argv){
	printf("file fgets\n");
	printf("============= \n");
	
	//./test27FILE_io_fgets < test27su.txt
	//./test27FILE_io_fgets < test27su.txt > test27hap.txt
	
	char data[MAX];
	int su1,su2;
	int count=1;
	//printf("%p\n",fgets(data,MAX,stdin));
	while(fgets(data,MAX,stdin)  != NULL){
		if(sscanf(data,"%d%d",&su1,&su2)==2){
			printf("%d,%d+%d=%d\n",count,su1,su2,su1+su2);
			count++;
		}else{
			fprintf(stderr,"Data Error:%s\n",data);
		}
		
	}
	
	
	return 0;
}



