#include <stdio.h>
#define nil NULL;//nil==0,NULL==0
int main(int argc, char **argv){
	printf("file io\n");
	printf("============= \n");
	
	//r(in:read),w(out:writer),a(out:append)
	FILE *fp_read = fopen("test27.txt","r");
	FILE *fp_write = fopen("test27write.txt","w");
	
	
	printf("%p\n",fp_read);
	if(fp_read == NULL){
		printf("File not found\n");
		return 1;
	}

	char c = fgetc(fp_read); 
	printf("%c(%d)\n",c,c);
	while(c != 255){
		printf("%c",c);
		fputc(c,fp_write);
		c = fgetc(fp_read);
	}
	
	
	fclose(fp_read);
	fclose(fp_write);
	
	
	return 0;
}



