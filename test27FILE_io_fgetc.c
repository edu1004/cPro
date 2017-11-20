#include <stdio.h>
#define nil NULL;//nil==0,NULL==0
int main(int argc, char **argv){
	printf("file io\n");
	printf("============= \n");
	
	//r(in:read),w(out:writer),a(out:append)
	FILE *fp_read = fopen("test27.txt","r");
	//java: File f = new File("test27.txt");
	
	printf("%p\n",fp_read);
	if(fp_read == NULL){
		return 1;
	}
	
	char c = fgetc(fp_read);
	printf("%c(%d)\n",c,c);
	
	while(c !=255){//linux 255,window -1
		printf("%c\n",c);
		c = fgetc(fp_read);
		printf("%c(%d)\n",c,c);
	}
	fclose(fp_read);
	
	return 0;
}



